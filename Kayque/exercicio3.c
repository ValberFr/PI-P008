#include <stdio.h>
#include <stdbool.h>

bool ehAnoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

bool ehDataValida(int dia, int mes, int ano) {
    if (ano < 1 || mes < 1 || mes > 12 || dia < 1) {
        return false;
    }

    int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (ehAnoBissexto(ano)) {
        diasNoMes[2] = 29; // Fevereiro tem 29 dias em anos bissextos
    }

    return dia <= diasNoMes[mes];
}

void imprimirDataPorExtenso(int dia, int mes, int ano) {
    const char *nomesMeses[] = {
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    printf("%d de %s de %d\n", dia, nomesMeses[mes - 1], ano);
}

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (ehDataValida(dia, mes, ano)) {
        printf("Dia: %d\n", dia);
        printf("Mês: %d\n", mes);
        printf("Ano: %d\n", ano);

        imprimirDataPorExtenso(dia, mes, ano);
    } else {
        printf("Data inválida.\n");
    }

    return 0;
}
