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
float func_IR_retido(float salario_mes){
    float salario_ano = salario_mes * 12, resultado = 0;
    if (salario_ano <= 22847.76)
    {
        printf("Isento\n");
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
float func_IR_devido(float salario_mes){
    float resultado = 0, salario_ano = salario_mes * 12;
    if (salario_ano <= 22847.76)
    {
        printf("Isento\n");
    }else if (salario_ano > 22847.76 && salario_ano <= 33919.80)
    {
        resultado = func_IR_retido(salario_ano) - 1713.58;

    }else if (salario_ano > 33919.80 && salario_ano <= 45012.60)
    {
        resultado = func_IR_retido(salario_ano) - 4257.57;
    }else if (salario_ano > 45012.60 && salario_ano <= 55976.16)
    {
        resultado = func_IR_retido(salario_ano) - 7633.51;
    }else if (salario_ano > 55976.16){
        resultado =  func_IR_retido(salario_ano) - 10432.32;
    }
    return resultado;
}

float valor_imposto_renda(float salario_mes){
    float valor_retido = func_IR_retido(salario_mes), valor_devido = func_IR_devido(salario_mes);
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
    
    
    valor_hora = valor_salario_min / 5;
    salario_mes = horas * valor_hora;
    valor_adc_noturno = func_adc_noturno(salario_mes);
    valor_dependentes = func_dependentes(dependentes);
    valor_hora_extra = func_valor_hora_extra(valor_hora, horas_extra);
    if (turno == 'n')
    {
        salario_mes += valor_adc_noturno;
    }
    valor_salario_bruto = func_salario_bruto(salario_mes, valor_hora_extra, valor_dependentes);
    valor_retido = func_IR_retido(salario_mes);
    valor_devido = func_IR_devido(salario_mes);

    float salario_liquido = valor_salario_bruto - valor_imposto_renda(valor_salario_bruto);
    printf("Salario liquido: %.2f\n", salario_liquido);
    printf("Salario do mes: %.2f\n", salario_mes);
    printf("Valor adicional por dependentes: %.2f\n", valor_dependentes);
    printf("Valor de horas extras: %.2f\n", valor_hora_extra);
    printf("Salario bruto: %.2f\n", valor_salario_bruto);

    return 0;
}
