#include <stdio.h>
 
float func_valor_hora_extra(float valor_hora, float horas_extra){
    float valor_hora_extra = valor_hora * 1.5;
    float adc_hora_extra = valor_hora_extra * horas_extra;

    return adc_hora_extra;
}

float func_dependentes(int dependentes){
    float valor_dependentes = (float)dependentes * 70;
    return valor_dependentes;
}

float func_salario_bruto(float salario_mes, float valor_hora_extra, float valor_dependentes){
    float valor_salario_bruto = salario_mes + valor_dependentes + valor_hora_extra;
    return valor_salario_bruto;
}
float func_adc_noturno(float salario_mes){
    float valor_adc_noturno = salario_mes * 0.15;
    return valor_adc_noturno;
}
float func_IR_retido(float salario_bruto){
    float salario_ano = salario_bruto * 12, resultado = 0;
    if (salario_ano <= 22847.76)
    {
        resultado = 0;
    }else if (salario_ano > 22847.76 && salario_ano <= 33919.80)
    {
        resultado = 7.5 * salario_ano / 100;
    }else if (salario_ano > 33919.80 && salario_ano <= 45012.60)
    {
        resultado = 15 * salario_ano / 100;
    }else if (salario_ano > 45012.60 && salario_ano <= 55976.16)
    {
        resultado = 22.5 * salario_ano / 100;
    }else if (salario_ano > 55976.16){
        resultado = 27.5 * salario_ano / 100;
    }
    return resultado;
}
float func_IR_devido(float salario_bruto){
    float resultado = 0, salario_ano = salario_bruto * 12;
    if (salario_ano <= 22847.76) {
        resultado = 0.0;
    } else if (salario_ano <= 33919.80) {
        resultado = func_IR_retido(salario_bruto) - 1713.58;
    } else if (salario_ano <= 45012.60) {
        resultado = func_IR_retido(salario_bruto) - 4257.57;
    } else if (salario_ano <= 55976.16) {
        resultado = func_IR_retido(salario_bruto) - 7633.51;
    } else {
        resultado = func_IR_retido(salario_bruto) - 10432.32;
    }
    return resultado;
}

float valor_imposto_renda(float salario_bruto){
    float valor_devido = func_IR_devido(salario_bruto);
    if (valor_devido == 0)
    {
        return 0;
    }

    float devido_um_mes = valor_devido / 12;
    return devido_um_mes;
}
int main(void)
{
    float valor_salario_min, horas, horas_extra, valor_hora = 0, salario_mes = 0, valor_hora_extra, valor_dependentes, valor_adc_noturno, valor_salario_bruto, valor_retido, valor_devido;
    int dependentes;
    char turno;

    printf("Salario minimo: ");
    scanf("%f", &valor_salario_min);
    
    printf("Horas trabalhadas: ");
    scanf("%f", &horas);
    
    printf("Horas extras: ");
    scanf("%f", &horas_extra);
    
    printf("Turno: ");
    scanf(" %c", &turno);

    printf("Dependentes: ");
    scanf("%d", &dependentes);
    
    
    valor_hora = valor_salario_min / horas;
    salario_mes = horas * valor_hora;
    if (turno == 'n')
    {
        valor_adc_noturno = func_adc_noturno(salario_mes);
        salario_mes += valor_adc_noturno;
    } else {
    valor_adc_noturno = 0;
}
    valor_dependentes = func_dependentes(dependentes);
    valor_hora_extra = func_valor_hora_extra(valor_hora, horas_extra);
    valor_salario_bruto = func_salario_bruto(salario_mes, valor_hora_extra, valor_dependentes);
    valor_retido = func_IR_retido(valor_salario_bruto);
    valor_devido = func_IR_devido(valor_salario_bruto);

    float salario_liquido = valor_salario_bruto - valor_imposto_renda(valor_salario_bruto);
    printf("Salario liquido: R$%.2f\n", salario_liquido);
    printf("Salario do mes: R$%.2f\n", salario_mes);
    printf("Valor adicional por dependentes: R$%.2f\n", valor_dependentes);
    printf("Valor de horas extras: R$%.2f\n", valor_hora_extra);
    printf("Salario bruto: R$%.2f\n", valor_salario_bruto);
    printf("Valor horas Trabalhadas R$%.2f\n", valor_hora);
    printf("Imposto de renda retido: R$%.2f\n", valor_retido);
    printf("Imposto de renda devido: R$%.2f\n", valor_devido);
    return 0;
}