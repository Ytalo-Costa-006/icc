    #include <stdio.h>
    int paraMinutos(int seg);
    int paraHoras(int seg);
    int paraDias(int seg);
    int paraMeses(int seg);
    int paraAnos(int seg);


    int main(void)
    {
        int seg;
        printf("Digite os segundos:\n");
        scanf("%d",&seg);
        if (seg < 0)
        {
            printf("Digite um valor valido para segundos");
        }else{
        printf("Segundos para minutos: %d\n", paraMinutos(seg));
        printf("Segundos para horas: %d\n", paraHoras(seg));
        printf("Segundos para dias: %d\n", paraDias(seg));
        printf("Segundos para meses: %d\n", paraMeses(seg));
        printf("Segundos para anos: %d\n", paraAnos(seg));
        }
        
        
        return 0;
    }

    int paraAnos(int seg){
        int sobraAnos ,anos = paraMeses(seg) / 60;
        sobraAnos = anos - paraMeses(seg);
        return sobraAnos;
    }

    int paraMeses(int seg){
        int meses = paraDias(seg) / 60;
        int sobraMeses = meses - paraDias(seg);
        return sobraMeses;
    }

    int paraDias(int seg){
        int dias = paraHoras(seg) / 60;
        int sobraDias = dias - paraHoras(seg);
        return sobraDias;
    }

    int paraHoras(int seg){
        int horas = paraMinutos(seg) / 60;
        int sobraHoras = horas - paraMinutos(seg);
        return sobraHoras;
    }
    int paraMinutos(int seg){
        int minutos = seg / 60;
        int sobraMinutos = minutos - seg;
        return sobraMinutos;
    }