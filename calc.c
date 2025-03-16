#include <stdio.h>
void soma()
{
    int numS1, numS2, resultadoS;
        printf("\nVoce Escolheu a Operacao SOMA! \n");
            printf("\nDigie o primeiro valor: ");
                scanf("%d", &numS1);
                    // printf("\n");
                        printf("Digite o segundo valor: ");
                            scanf("%d", &numS2);

                                // Calculo da soma
                                    resultadoS = numS1 + numS2;

                                        printf("\nResultado da Soma e: %d \n", resultadoS);
                                        }

                                        void subtracao()
                                        {
                                            float resultadoSUB, numSUB1, numSUB2;
                                                printf("\nVoce Escolheu a Operacao SUBTRACAO! \n");
                                                    printf("\nDigie o primeiro valor: ");
                                                        scanf("%f", &numSUB1);
                                                            // printf("\n");
                                                                printf("Digite o segundo valor: ");
                                                                    scanf("%f", &numSUB2);

                                                                        // Calculo da soma
                                                                            resultadoSUB = numSUB1 / numSUB2;

                                                                                printf("\nResultado da Subtracao e: %.2f", resultadoSUB);
                                                                                }

                                                                                void multiplicacao()
                                                                                {
                                                                                    int resultadoM, numM1, numM2;
                                                                                        printf("\nVoce Escolheu a Operacao MULTIPLICAO! \n");
                                                                                            printf("\nDigie o primeiro valor: ");
                                                                                                scanf("%d", &numM1);
                                                                                                    // printf("\n");
                                                                                                        printf("Digite o segundo valor: ");
                                                                                                            scanf("%d", &numM2);

                                                                                                                // Calculo da soma
                                                                                                                    resultadoM = numM1 * numM2;

                                                                                                                        printf("\nResultado da Multiplicacao e: %d \n", resultadoM);
                                                                                                                        }

                                                                                                                        void divisao()
                                                                                                                        {
                                                                                                                            int resultadoD, numD1, numD2;
                                                                                                                                printf("\nVoce Escolheu a Operacao DIVISAO! \n");
                                                                                                                                    printf("\nDigie o primeiro valor: ");
                                                                                                                                        scanf("%d", &numD1);
                                                                                                                                            // printf("\n");
                                                                                                                                                printf("Digite o segundo valor: ");
                                                                                                                                                    scanf("%d", &numD2);

                                                                                                                                                        // Calculo da soma
                                                                                                                                                            resultadoD = numD1 / numD2;

                                                                                                                                                                printf("\nResultado da Divisao e: %d \n", resultadoD);
                                                                                                                                                                }

                                                                                                                                                                int main()
                                                                                                                                                                {
                                                                                                                                                                    int opcao;
                                                                                                                                                                        do
                                                                                                                                                                            {
                                                                                                                                                                                    printf("\n*********************************************\n");
                                                                                                                                                                                            printf("Bem-vindo a sua calculadora humanoid!\n");
                                                                                                                                                                                                    printf("1) SOMA \n");
                                                                                                                                                                                                            printf("2) SUBTRACAO \n");
                                                                                                                                                                                                                    printf("3) MULTIPLICACAO \n");
                                                                                                                                                                                                                            printf("4) DIVISAO \n");
                                                                                                                                                                                                                                    printf("5) Sair\n");
                                                                                                                                                                                                                                            printf("Escolha uma opcao: ");
                                                                                                                                                                                                                                                    scanf("%d", &opcao);
                                                                                                                                                                                                                                                            printf("*********************************************\n");
                                                                                                                                                                                                                                                                    getchar();

                                                                                                                                                                                                                                                                            switch (opcao)
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                            case 1:
                                                                                                                                                                                                                                                                                                        soma();
                                                                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                                                                            case 2:
                                                                                                                                                                                                                                                                                                                                        subtracao();
                                                                                                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                                                                                                            case 3:
                                                                                                                                                                                                                                                                                                                                                                        multiplicacao();
                                                                                                                                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                                                                                                                                            case 4:
                                                                                                                                                                                                                                                                                                                                                                                                        divisao();
                                                                                                                                                                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                                                                                                                                                                            case 5:
                                                                                                                                                                                                                                                                                                                                                                                                                                        printf("Pressione 'ENTER' para sair da calculadora humanoid!....\n");
                                                                                                                                                                                                                                                                                                                                                                                                                                                    getchar();
                                                                                                                                                                                                                                                                                                                                                                                                                                                                break;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                        default:
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    printf("Opcao Invalida, Tente Novamente com uma opcao valida!(1-4)\n");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                break;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            } while (opcao != 5);

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                }