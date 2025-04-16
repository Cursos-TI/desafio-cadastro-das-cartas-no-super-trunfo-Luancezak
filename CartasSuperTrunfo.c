 // Declaraçao da variaveis para armazenar dados das cartas 
int main(){

char estado1, estado2;
char codigo1[4] , codigo2[4];
char cidade1[50] , cidade2[50];
unsigned long int populacao1 , populacao2;
float areakm1 , areakm2 ;
float pib1 , pib2;
int pontosturisticos1 , pontosturisticos2;
float pibpercapita1 , pibpercapita2;
float densidadepopulacional1, densidadepopulacional2;



//Entrada de dados da primeira carta 

float superpoder1= populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpercapita1 + (1/densidadepopulacional1);


printf("\n========== CARTA 1 ===========\n");
printf("\nEstado (A - H): ");
scanf (" %c" , &estado1);

printf("Código da carta (01 - 04): ");
scanf ("%s", codigo1);

printf("Nome da cidade: ");
scanf ("%s" , cidade1);

printf("População: ");
scanf("%lu" , &populacao1);

printf("Área (em km²): ");
scanf("%f" , &areakm1);

printf("Pib: ");
scanf("%f" , &pib1);

printf("Número de pontos turisticos: ");
scanf("%d" , &pontosturisticos1);


// Entrada de dados das segunda carta 

float superpoder2= populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpercapita2 + (1/densidadepopulacional2);
printf("\n========== CARTA 2 ===========\n");
printf("\nEstado (A - H): ");
scanf (" %c" , &estado2);

printf("Código da carta (01 - 04): ");
scanf ("%s", codigo2);

printf("Nome da cidade: ");
scanf ("%s" , cidade2);

printf("População: ");
scanf("%lu" , &populacao2);

printf("Área (em km²): ");
scanf("%f" , &areakm2);

printf("Pib: ");
scanf("%f" , &pib2);

printf("Número de pontos turisticos: ");
scanf("%d" , &pontosturisticos2);



// guardando resultado da comparação para vencedor
int result_populacao = populacao1 > populacao2;
int result_area = areakm1 > areakm2;
int result_pib = pib1 > pib2;
int result_pt = pontosturisticos1 > pontosturisticos2;
int result_densidade = densidadepopulacional1 < densidadepopulacional2;
int result_pibpercapita = pibpercapita1 > pibpercapita2;


// exibe resultado da carta vencedora..
printf("\n|    ==========   RESULTADO DA COMPARAÇÃO   ==========    |\n");
printf("|    0 - para carta 2 venceu | 1 - para carta 1 venceu    |\n");
printf("\nPopulaçao: (%d)\n" , result_populacao); 
 // se aparecer populaçao (1) - carta 1 venceu..
 // se aparecer populaçao (0) - carta 2 venceu..
printf("Área: (%d)\n" , result_area); 
printf("PIB: (%d)\n" , result_pib); 
printf("Número de pontos turisticos: (%d)\n" , result_pt); 
printf("PibperCapita: (%d)\n" , result_pibpercapita); 
printf("Densidade Populacional: (%d)\n" , result_densidade);
printf("super poder da carta 1 (%f)" , superpoder1);
printf("super pode da carta 2 (%f)\n" , superpoder2);



return 0;}
