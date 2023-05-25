#include<stdio.h>
#include <string.h>
#include<math.h>

void  maximo(float vector[11]); // Todas las funciones empleadas
float promedio(float vector[11]);
void minimo(float vector[11]);
void MWhaeuro(float vector[11]);
void MWhaGWh(float vector[11]);
float desviacion(float vector[11]);
float varianza(float vector[11]);
void menoramayor(float vector[11]);
void mayoramenor(float vector[11]);
void MWhaMJ(float vector[11]);

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia2;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia3;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia4;

int main()
{
	int comunidad,i;
	int palabra=0,lineas=0,palabra2=0,lineas2=0,palabra3=0,lineas3=0,palabra4=0,lineas4=0;
	float hidrau[11],hidroeoli[11],eoli[11],solar[11],termica[11],otras[11],resid[11],total[11],rectf[11];
	float hidrau2[11],hidroeoli2[11],eoli2[11],solar2[11],termica2[11],otras2[11],resid2[11],total2[11],rectf2[11];
	float hidrau3[11],hidroeoli3[11],eoli3[11],solar3[11],termica3[11],otras3[11],resid3[11],total3[11],rectf3[11];
	float hidrau4[11],hidroeoli4[11],eoli4[11],solar4[11],termica4[11],otras4[11],resid4[11],total4[11],rectf4[11];
	float max1,prom1,min1,desv1,vari1;
	float num,num2,num3,num4;
	char datoAnd,datoArg,datoAst,datoCant;
	int funciones,atras,renovable;
	energia valoresenergia[1];
	energia2 valoresenergia2[1];
	energia3 valoresenergia3[1];
	energia4 valoresenergia4[1];
	FILE *fAndalucia;
	FILE *fAragon;
	FILE *fAsturias;
	FILE *fCantabria;
	
	fAndalucia=fopen("GeneracionAnd2.csv","r");
	if(fAndalucia==NULL)//Lectura fichero de Andalucía
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fAndalucia, "%c",&datoAnd)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas>=5 && lineas<=10)//Para estas lineas interesan los datos
			{	
				if(datoAnd==',')//Cuando hay una coma suma una palabra
				{
					++palabra;
					if(palabra>0 && palabra<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fAndalucia,"%f",&num);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas==5)//Hidráulica
						{
							hidrau[i]=num;
							i++;
						}
						if(lineas==6)//Eólica
						{
							eoli[i]=num;
							i++;
						}
						if(lineas==7)//Solar fotovoltaica
						{
							solar[i]=num;
							i++;
						}
						if(lineas==8)//Solar térmica
						{
							termica[i]=num;
							i++;
						}
						if(lineas==9)//Otras renovables
						{
							otras[i]=num;
							i++;
						}
						if(lineas==10)//Genereación total
						{
							total[i]=num;
							i++;
						}
						
					}
				}
			}
			if(datoAnd=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas;
			palabra=0;
			i=0;
			}
		}	
	}
	
	fAragon=fopen("GeneracionArg2.csv","r");
	if(fAragon==NULL)//Lectura fichero de Aragon
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fAragon, "%c",&datoArg)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas2>=5 && lineas2<=9)//Para estas lineas interesan los datos
			{	
				if(datoArg==',')//Cuando hay una coma suma una palabra
				{
					++palabra2;
					if(palabra2>0 && palabra2<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fAragon,"%f",&num2);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas2==5)//Hidráulica
						{
							hidrau2[i]=num2;
							i++;
						}
						if(lineas2==6)//Eólica
						{
							eoli2[i]=num2;
							i++;
						}
						if(lineas2==7)//Solar fotovoltaica
						{
							solar2[i]=num2;
							i++;
						}
						if(lineas2==8)//Otras renovables
						{
							otras2[i]=num2;
							i++;
						}
						if(lineas2==9)//Genereación total
						{
							total2[i]=num2;
							i++;
						}
						
					}
				}
			}
			if(datoArg=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas2;
			palabra2=0;
			i=0;
			}
		}	
	}
	
	fAsturias=fopen("GeneracionAus2.csv","r");
	if(fAsturias==NULL)//Lectura fichero de Asturias
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fAsturias, "%c",&datoAst)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas3>=5 && lineas3<=9)//Para estas lineas interesan los datos
			{	
				if(datoAst==',')//Cuando hay una coma suma una palabra
				{
					++palabra3;
					if(palabra3>0 && palabra3<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fAsturias,"%f",&num3);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas3==5)//Hidráulica
						{
							hidrau3[i]=num3;
							i++;
						}
						if(lineas3==6)//Eólica
						{
							eoli3[i]=num3;
							i++;
						}
						if(lineas3==7)//Solar fotovoltaica
						{
							solar3[i]=num3;
							i++;
						}
						if(lineas3==8)//Otras renovables
						{
							otras3[i]=num3;
							i++;
						}
						if(lineas3==9)//Genereación total
						{
							total3[i]=num3;
							i++;
						}
						
					}
				}
			}
			if(datoAst=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas3;
			palabra3=0;
			i=0;
			}
		}	
	}
	
	fCantabria=fopen("GeneracionCan2.csv","r");
	if(fCantabria==NULL)//Lectura fichero de Andalucía
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fCantabria, "%c",&datoCant)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas4>=5 && lineas4<=10)//Para estas lineas interesan los datos
			{	
				if(datoCant==',')//Cuando hay una coma suma una palabra
				{
					++palabra4;
					if(palabra4>0 && palabra4<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fCantabria,"%f",&num4);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas4==5)//Hidráulica
						{
							hidrau4[i]=num4;
							i++;
						}
						if(lineas4==6)//Eólica
						{
							eoli4[i]=num4;
							i++;
						}
						if(lineas4==7)//Solar fotovoltaica
						{
							solar4[i]=num4;
							i++;
						}
						if(lineas4==8)//Otras renovables
						{
							otras4[i]=num4;
							i++;
						}
						if(lineas4==9)//Residuos renovables
						{
							resid4[i]=num4;
							i++;
						}
						if(lineas4==10)//Genereación total
						{
							total4[i]=num4;
							i++;
						}
						
					}
				}
			}
			if(datoCant=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas4;
			palabra4=0;
			i=0;
			}
		}	
	}
	do//Do-while para mantener el texto inicial si se elige una comunidad dentro de las que hay
	{
	printf("\nSe han recogido datos de generacion de energia mediante estructuras\nrenovables en cada comunidad autonoma mensualmente en el ano 2022\n");
	printf("\nIntroduzca el numero de la comunidad que quiere seleccionar:\n\n");
	printf("1.-Andalucia\n2.-Aragon\n3.-Asturias\n4.-Cantabria\n5.-Castilla-La Mancha\n6.-Castilla y Leon\n7.-Cataluña\n8.-Ceuta\n9.-C.de Madrid\n10.-C.Valencia\n");
	printf("11.-Extremadura\n12.-Galicia\n13.-Islas Baleares\n14.-Islas Canarias\n15.-La Rioja\n16.-Melilla\n17.-Murcia\n18.-Navarra\n19.-Pais Vasco\n");
	scanf("%i",&comunidad);
	switch(comunidad)//Para cada comunidad un numero 
	{
		case 1://Andalucia
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Andalucia:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que también se quiere volver hacia atrás
					if(renovable==0)//Para poder volver hacia atrás
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un número
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Andalucia:\n\n");
									strcpy(valoresenergia[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia[0].MWh= hidrau[0];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Febrero");
									valoresenergia[0].MWh= hidrau[1];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Marzo");
									valoresenergia[0].MWh= hidrau[2];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Abril");
									valoresenergia[0].MWh= hidrau[3];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Mayo");
									valoresenergia[0].MWh= hidrau[4];
									printf("%s - %f MWh\t\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Junio");
									valoresenergia[0].MWh= hidrau[5];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Julio");
									valoresenergia[0].MWh= hidrau[6];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Agosto");
									valoresenergia[0].MWh= hidrau[7];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Septiembre");
									valoresenergia[0].MWh= hidrau[8];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Octubre");
									valoresenergia[0].MWh= hidrau[9];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Noviembre");
									valoresenergia[0].MWh= hidrau[10];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Diciembre");
									valoresenergia[0].MWh= hidrau[11];
									printf("%s - %f MWh\t\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Andalucia es:\n\n");
													maximo(hidrau);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Andalucia es:\n\n");
													minimo(hidrau);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidrau);
													printf("\nEl promedio de generacion hidraulica en Andalucia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidrau);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidrau);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(hidrau);
													printf("\nLa desviación tipica de generacion hidraulica en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(hidrau);
													printf("\nLa varianza de generacion hidraulica en Andalucia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de mayor a menor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=hidrau[i];
													}
													mayoramenor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de menor a mayor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=hidrau[i];
													}
													menoramayor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(hidrau);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condición es solo para el caso 1
							break;
							}
						case 2://Hidroeólica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Andalucia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condición es solo para el caso 2
							break;
							}
						case 3://Eólica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en Andalucia:\n\n");
									strcpy(valoresenergia[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia[0].MWh= eoli[0];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Febrero");
									valoresenergia[0].MWh= eoli[1];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Marzo");
									valoresenergia[0].MWh= eoli[2];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Abril");
									valoresenergia[0].MWh= eoli[3];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Mayo");
									valoresenergia[0].MWh= eoli[4];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Junio");
									valoresenergia[0].MWh= eoli[5];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Julio");
									valoresenergia[0].MWh= eoli[6];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Agosto");
									valoresenergia[0].MWh= eoli[7];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Septiembre");
									valoresenergia[0].MWh= eoli[8];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Octubre");
									valoresenergia[0].MWh= eoli[9];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Noviembre");
									valoresenergia[0].MWh= eoli[10];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Diciembre");
									valoresenergia[0].MWh= eoli[11];
									printf("%s - %f MWh\t\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Andalucia es:\n\n");
													maximo(eoli);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Andalucia es:\n\n");
													minimo(eoli);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli);
													printf("\nEl promedio de generacion eolica en Andalucia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(eoli);
													printf("\nLa desviación tipica de generacion eolica en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(eoli);
													printf("\nLa varianza de generacion eolica en Andalucia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de mayor a menor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=eoli[i];
													}
													mayoramenor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de menor a mayor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=eoli[i];
													}
													menoramayor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(eoli);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condición es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Andalucia:\n\n");
									strcpy(valoresenergia[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia[0].MWh= solar[0];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Febrero");
									valoresenergia[0].MWh= solar[1];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Marzo");
									valoresenergia[0].MWh= solar[2];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Abril");
									valoresenergia[0].MWh= solar[3];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Mayo");
									valoresenergia[0].MWh= solar[4];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Junio");
									valoresenergia[0].MWh= solar[5];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Julio");
									valoresenergia[0].MWh= solar[6];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Agosto");
									valoresenergia[0].MWh= solar[7];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Septiembre");
									valoresenergia[0].MWh= solar[8];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Octubre");
									valoresenergia[0].MWh= solar[9];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Noviembre");
									valoresenergia[0].MWh= solar[10];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Diciembre");
									valoresenergia[0].MWh= solar[11];
									printf("%s - %f MWh\t\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Andalucia es:\n\n");
													maximo(solar);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Andalucia es:\n\n");
													minimo(solar);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar);
													printf("\nEl promedio de generacion solar fotovoltaica en Andalucia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(solar);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(solar);
													printf("\nLa varianza de generacion solar fotovoltaica en Andalucia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=solar[i];
													}
													mayoramenor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=solar[i];
													}
													menoramayor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(solar);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condición es solo para el caso 4
							break;
							}
						case 5://Solar térmica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar termica en Andalucia:\n\n");
									strcpy(valoresenergia[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia[0].MWh= termica[0];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Febrero");
									valoresenergia[0].MWh= termica[1];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Marzo");
									valoresenergia[0].MWh= termica[2];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Abril");
									valoresenergia[0].MWh= termica[3];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Mayo");
									valoresenergia[0].MWh= termica[4];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Junio");
									valoresenergia[0].MWh= termica[5];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Julio");
									valoresenergia[0].MWh= termica[6];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Agosto");
									valoresenergia[0].MWh= termica[7];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Septiembre");
									valoresenergia[0].MWh= termica[8];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Octubre");
									valoresenergia[0].MWh= termica[9];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Noviembre");
									valoresenergia[0].MWh= termica[10];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Diciembre");
									valoresenergia[0].MWh= termica[11];
									printf("%s - %f MWh\t\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar termica en Andalucia es:\n\n");
													maximo(termica);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar termica en Andalucia es:\n\n");
													minimo(termica);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(termica);
													printf("\nEl promedio de generacion solar termica en Andalucia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(termica);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(termica);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(termica);
													printf("\nLa desviación tipica de generacion solar termica en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(termica);
													printf("\nLa varianza de generacion solar termica en Andalucia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar termica de mayor a menor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=termica[i];
													}
													mayoramenor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar termica de menor a mayor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=termica[i];
													}
													menoramayor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(termica);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==5);//La condición es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Andalucia:\n\n");
									strcpy(valoresenergia[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia[0].MWh= otras[0];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Febrero");
									valoresenergia[0].MWh= otras[1];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Marzo");
									valoresenergia[0].MWh= otras[2];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Abril");
									valoresenergia[0].MWh= otras[3];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Mayo");
									valoresenergia[0].MWh= otras[4];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Junio");
									valoresenergia[0].MWh= otras[5];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Julio");
									valoresenergia[0].MWh= otras[6];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Agosto");
									valoresenergia[0].MWh= otras[7];
									printf("%s - %f MWh\t\n\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Septiembre");
									valoresenergia[0].MWh= otras[8];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Octubre");
									valoresenergia[0].MWh= otras[9];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Noviembre");
									valoresenergia[0].MWh= otras[10];
									printf("%s - %f MWh\t",valoresenergia[0].mes,valoresenergia[0].MWh);
									strcpy(valoresenergia[0].mes, "Diciembre");
									valoresenergia[0].MWh= otras[11];
									printf("%s - %f MWh\t\n",valoresenergia[0].mes,valoresenergia[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Andalucia es:\n\n");
													maximo(otras);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Andalucia es:\n\n");
													minimo(otras);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras);
													printf("\nEl promedio de generacion de otras renovables en Andalucia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(otras);
													printf("\nLa desviación tipica de generacion de otras renovables en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(otras);
													printf("\nLa varianza de generacion de otras renovables en Andalucia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de mayor a menor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=otras[i];
													}
													mayoramenor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de menor a mayor en Andalucia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf[i]=otras[i];
													}
													menoramayor(rectf);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(otras);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condición es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Andalucia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condición es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==1);//La condición es solo para el caso 1
			break;
		}
		case 2://Aragón
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Aragon:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que también se quiere volver hacia atrás
					if(renovable==0)//Para poder volver hacia atrás
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un número
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Aragon:\n\n");
									strcpy(valoresenergia2[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia2[0].MWh= hidrau2[0];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Febrero");
									valoresenergia2[0].MWh= hidrau2[1];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Marzo");
									valoresenergia2[0].MWh= hidrau2[2];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Abril");
									valoresenergia2[0].MWh= hidrau2[3];
									printf("%s - %f MWh\t\n\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Mayo");
									valoresenergia2[0].MWh= hidrau2[4];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Junio");
									valoresenergia2[0].MWh= hidrau2[5];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Julio");
									valoresenergia2[0].MWh= hidrau2[6];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Agosto");
									valoresenergia2[0].MWh= hidrau2[7];
									printf("%s - %f MWh\t\n\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Septiembre");
									valoresenergia2[0].MWh= hidrau2[8];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Octubre");
									valoresenergia2[0].MWh= hidrau2[9];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Noviembre");
									valoresenergia2[0].MWh= hidrau2[10];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Diciembre");
									valoresenergia2[0].MWh= hidrau2[11];
									printf("%s - %f MWh\t\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Aragon es:\n\n");
													maximo(hidrau2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Aragon es:\n\n");
													minimo(hidrau2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidrau2);
													printf("\nEl promedio de generacion hidraulica en Aragon es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidrau2);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidrau2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(hidrau2);
													printf("\nLa desviación tipica de generacion hidraulica en Aragon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(hidrau2);
													printf("\nLa varianza de generacion hidraulica en Aragon es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de mayor a menor en Aragon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=hidrau2[i];
													}
													mayoramenor(rectf2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de menor a mayor en Aragon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=hidrau2[i];
													}
													menoramayor(rectf2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(hidrau2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condición es solo para el caso 1
							break;
							}
						case 2://Hidroeólica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Aragon.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condición es solo para el caso 2
							break;
							}
						case 3://Eólica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en Aragon:\n\n");
									strcpy(valoresenergia2[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia2[0].MWh= eoli2[0];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Febrero");
									valoresenergia2[0].MWh= eoli2[1];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Marzo");
									valoresenergia2[0].MWh= eoli2[2];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Abril");
									valoresenergia2[0].MWh= eoli2[3];
									printf("%s - %f MWh\t\n\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Mayo");
									valoresenergia2[0].MWh= eoli2[4];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Junio");
									valoresenergia2[0].MWh= eoli2[5];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Julio");
									valoresenergia2[0].MWh= eoli2[6];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Agosto");
									valoresenergia2[0].MWh= eoli2[7];
									printf("%s - %f MWh\t\n\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Septiembre");
									valoresenergia2[0].MWh= eoli2[8];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Octubre");
									valoresenergia2[0].MWh= eoli2[9];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Noviembre");
									valoresenergia2[0].MWh= eoli2[10];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Diciembre");
									valoresenergia2[0].MWh= eoli2[11];
									printf("%s - %f MWh\t\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Aragon es:\n\n");
													maximo(eoli2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Aragon es:\n\n");
													minimo(eoli2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli2);
													printf("\nEl promedio de generacion eolica en Aragon es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli2);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(eoli2);
													printf("\nLa desviación tipica de generacion eolica en Aragon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(eoli2);
													printf("\nLa varianza de generacion eolica en Aragon es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de mayor a menor en Aragon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=eoli2[i];
													}
													mayoramenor(rectf2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de menor a mayor en Aragon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=eoli2[i];
													}
													menoramayor(rectf2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(eoli2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condición es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Aragon:\n\n");
									strcpy(valoresenergia2[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia2[0].MWh= solar2[0];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Febrero");
									valoresenergia2[0].MWh= solar2[1];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Marzo");
									valoresenergia2[0].MWh= solar2[2];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Abril");
									valoresenergia2[0].MWh= solar2[3];
									printf("%s - %f MWh\t\n\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Mayo");
									valoresenergia2[0].MWh= solar2[4];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Junio");
									valoresenergia2[0].MWh= solar2[5];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Julio");
									valoresenergia2[0].MWh= solar2[6];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Agosto");
									valoresenergia2[0].MWh= solar2[7];
									printf("%s - %f MWh\t\n\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Septiembre");
									valoresenergia2[0].MWh= solar2[8];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Octubre");
									valoresenergia2[0].MWh= solar2[9];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Noviembre");
									valoresenergia2[0].MWh= solar2[10];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Diciembre");
									valoresenergia2[0].MWh= solar2[11];
									printf("%s - %f MWh\t\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Aragon es:\n\n");
													maximo(solar2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Aragon es:\n\n");
													minimo(solar2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar2);
													printf("\nEl promedio de generacion solar fotovoltaica en Aragon es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar2);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(solar2);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Aragon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(solar2);
													printf("\nLa varianza de generacion solar fotovoltaica en Aragon es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Aragon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=solar2[i];
													}
													mayoramenor(rectf2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Aragon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=solar2[i];
													}
													menoramayor(rectf2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(solar2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condición es solo para el caso 4
							break;
							}
						case 5://Solar térmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en Aragon.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condición es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Aragon:\n\n");
									strcpy(valoresenergia2[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia2[0].MWh= otras2[0];
									printf("%s - %f MWh\t\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Febrero");
									valoresenergia2[0].MWh= otras2[1];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Marzo");
									valoresenergia2[0].MWh= otras2[2];
									printf("%s - %f MWh\t\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Abril");
									valoresenergia2[0].MWh= otras2[3];
									printf("%s - %f MWh\t\n\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Mayo");
									valoresenergia2[0].MWh= otras2[4];
									printf("%s - %f MWh\t\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Junio");
									valoresenergia2[0].MWh= otras2[5];
									printf("%s - %f MWh\t\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Julio");
									valoresenergia2[0].MWh= otras2[6];
									printf("%s - %f MWh\t\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Agosto");
									valoresenergia2[0].MWh= otras2[7];
									printf("%s - %f MWh\t\n\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Septiembre");
									valoresenergia2[0].MWh= otras2[8];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Octubre");
									valoresenergia2[0].MWh= otras2[9];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Noviembre");
									valoresenergia2[0].MWh= otras2[10];
									printf("%s - %f MWh\t",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									strcpy(valoresenergia2[0].mes, "Diciembre");
									valoresenergia2[0].MWh= otras2[11];
									printf("%s - %f MWh\t\n",valoresenergia2[0].mes,valoresenergia2[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Aragon es:\n\n");
													maximo(otras2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Aragon es:\n\n");
													minimo(otras2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras2);
													printf("\nEl promedio de generacion de otras renovables en Aragon es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras2);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(otras2);
													printf("\nLa desviación tipica de generacion de otras renovables en Aragon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(otras2);
													printf("\nLa varianza de generacion de otras renovables en Aragon es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de mayor a menor en Aragon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=otras2[i];
													}
													mayoramenor(rectf2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de menor a mayor en Aragon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=otras2[i];
													}
													menoramayor(rectf2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(otras2);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condición es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Aragon.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condición es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==2);//La condición es solo para el caso 1
			break;
		}
		case 3://Asturias
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Asturias:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que también se quiere volver hacia atrás
					if(renovable==0)//Para poder volver hacia atrás
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un número
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Asturias:\n\n");
									strcpy(valoresenergia3[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia3[0].MWh= hidrau3[0];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Febrero");
									valoresenergia3[0].MWh= hidrau3[1];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Marzo");
									valoresenergia3[0].MWh= hidrau3[2];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Abril");
									valoresenergia3[0].MWh= hidrau3[3];
									printf("%s - %f MWh\t\n\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Mayo");
									valoresenergia3[0].MWh= hidrau3[4];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Junio");
									valoresenergia3[0].MWh= hidrau3[5];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Julio");
									valoresenergia3[0].MWh= hidrau3[6];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Agosto");
									valoresenergia3[0].MWh= hidrau3[7];
									printf("%s - %f MWh\t\n\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Septiembre");
									valoresenergia3[0].MWh= hidrau3[8];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Octubre");
									valoresenergia3[0].MWh= hidrau3[9];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Noviembre");
									valoresenergia3[0].MWh= hidrau3[10];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Diciembre");
									valoresenergia3[0].MWh= hidrau3[11];
									printf("%s - %f MWh\t\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Asturias es:\n\n");
													maximo(hidrau3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Asturias es:\n\n");
													minimo(hidrau3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidrau3);
													printf("\nEl promedio de generacion hidraulica en Asturias es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidrau3);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidrau3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(hidrau3);
													printf("\nLa desviación tipica de generacion hidraulica en Asturias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(hidrau3);
													printf("\nLa varianza de generacion hidraulica en Asturias es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de mayor a menor en Asturias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf3[i]=hidrau3[i];
													}
													mayoramenor(rectf3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de menor a mayor en Asturias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf3[i]=hidrau3[i];
													}
													menoramayor(rectf3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(hidrau3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condición es solo para el caso 1
							break;
							}
						case 2://Hidroeólica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Asturias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condición es solo para el caso 2
							break;
							}
						case 3://Eólica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en Asturias:\n\n");
									strcpy(valoresenergia3[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia3[0].MWh= eoli3[0];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Febrero");
									valoresenergia3[0].MWh= eoli3[1];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Marzo");
									valoresenergia3[0].MWh= eoli3[2];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Abril");
									valoresenergia3[0].MWh= eoli3[3];
									printf("%s - %f MWh\t\n\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Mayo");
									valoresenergia3[0].MWh= eoli3[4];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Junio");
									valoresenergia3[0].MWh= eoli3[5];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Julio");
									valoresenergia3[0].MWh= eoli3[6];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Agosto");
									valoresenergia3[0].MWh= eoli3[7];
									printf("%s - %f MWh\t\n\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Septiembre");
									valoresenergia3[0].MWh= eoli3[8];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Octubre");
									valoresenergia3[0].MWh= eoli3[9];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Noviembre");
									valoresenergia3[0].MWh= eoli3[10];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Diciembre");
									valoresenergia3[0].MWh= eoli3[11];
									printf("%s - %f MWh\t\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Asturias es:\n\n");
													maximo(eoli3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Asturias es:\n\n");
													minimo(eoli3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli3);
													printf("\nEl promedio de generacion eolica en Asturias es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli3);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(eoli3);
													printf("\nLa desviación tipica de generacion eolica en Asturias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(eoli3);
													printf("\nLa varianza de generacion eolica en Asturias es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de mayor a menor en Asturias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf3[i]=eoli3[i];
													}
													mayoramenor(rectf3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de menor a mayor en Asturias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf3[i]=eoli3[i];
													}
													menoramayor(rectf3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(eoli3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condición es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Asturias:\n\n");
									strcpy(valoresenergia3[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia3[0].MWh= solar3[0];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Febrero");
									valoresenergia3[0].MWh= solar3[1];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Marzo");
									valoresenergia3[0].MWh= solar3[2];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Abril");
									valoresenergia3[0].MWh= solar3[3];
									printf("%s - %f MWh\t\n\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Mayo");
									valoresenergia3[0].MWh= solar3[4];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Junio");
									valoresenergia3[0].MWh= solar3[5];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Julio");
									valoresenergia3[0].MWh= solar3[6];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Agosto");
									valoresenergia3[0].MWh= solar3[7];
									printf("%s - %f MWh\t\n\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Septiembre");
									valoresenergia3[0].MWh= solar3[8];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Octubre");
									valoresenergia3[0].MWh= solar3[9];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Noviembre");
									valoresenergia3[0].MWh= solar3[10];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Diciembre");
									valoresenergia3[0].MWh= solar3[11];
									printf("%s - %f MWh\t\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Asturias es:\n\n");
													maximo(solar3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Asturias es:\n\n");
													minimo(solar3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar3);
													printf("\nEl promedio de generacion solar fotovoltaica en Asturias es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar3);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(solar3);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Asturias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(solar3);
													printf("\nLa varianza de generacion solar fotovoltaica en Asturias es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Asturias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf3[i]=solar3[i];
													}
													mayoramenor(rectf3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Asturias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf3[i]=solar3[i];
													}
													menoramayor(rectf3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(solar3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condición es solo para el caso 4
							break;
							}
						case 5://Solar térmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en Asturias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condición es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Asturias:\n\n");
									strcpy(valoresenergia3[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia3[0].MWh= otras3[0];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Febrero");
									valoresenergia3[0].MWh= otras3[1];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Marzo");
									valoresenergia3[0].MWh= otras3[2];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Abril");
									valoresenergia3[0].MWh= otras3[3];
									printf("%s - %f MWh\t\n\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Mayo");
									valoresenergia3[0].MWh= otras3[4];
									printf("%s - %f MWh\t\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Junio");
									valoresenergia3[0].MWh= otras3[5];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Julio");
									valoresenergia3[0].MWh= otras3[6];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Agosto");
									valoresenergia3[0].MWh= otras3[7];
									printf("%s - %f MWh\t\n\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Septiembre");
									valoresenergia3[0].MWh= otras3[8];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Octubre");
									valoresenergia3[0].MWh= otras3[9];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Noviembre");
									valoresenergia3[0].MWh= otras3[10];
									printf("%s - %f MWh\t",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									strcpy(valoresenergia3[0].mes, "Diciembre");
									valoresenergia3[0].MWh= otras3[11];
									printf("%s - %f MWh\t\n",valoresenergia3[0].mes,valoresenergia3[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Asturias es:\n\n");
													maximo(otras3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Asturias es:\n\n");
													minimo(otras3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras3);
													printf("\nEl promedio de generacion de otras renovables en Asturias es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras3);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(otras3);
													printf("\nLa desviación tipica de generacion de otras renovables en Asturias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(otras3);
													printf("\nLa varianza de generacion de otras renovables en Asturias es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de mayor a menor en Asturias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf3[i]=otras3[i];
													}
													mayoramenor(rectf3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de menor a mayor en Asturias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf3[i]=otras3[i];
													}
													menoramayor(rectf3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(otras3);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condición es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Asturias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condición es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==3);//La condición es solo para el caso 3
			break;
		}
		case 4://Cantabria
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Cantabria:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que también se quiere volver hacia atrás
					if(renovable==0)//Para poder volver hacia atrás
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un número
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Cantabria:\n\n");
									strcpy(valoresenergia4[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia4[0].MWh= hidrau4[0];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Febrero");
									valoresenergia4[0].MWh= hidrau4[1];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Marzo");
									valoresenergia4[0].MWh= hidrau4[2];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Abril");
									valoresenergia4[0].MWh= hidrau4[3];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Mayo");
									valoresenergia4[0].MWh= hidrau4[4];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Junio");
									valoresenergia4[0].MWh= hidrau4[5];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Julio");
									valoresenergia4[0].MWh= hidrau4[6];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Agosto");
									valoresenergia4[0].MWh= hidrau4[7];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Septiembre");
									valoresenergia4[0].MWh= hidrau4[8];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Octubre");
									valoresenergia4[0].MWh= hidrau4[9];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Noviembre");
									valoresenergia4[0].MWh= hidrau4[10];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Diciembre");
									valoresenergia4[0].MWh= hidrau4[11];
									printf("%s - %f MWh\t\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Cantabria es:\n\n");
													maximo(hidrau4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Cantabria es:\n\n");
													minimo(hidrau4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidrau4);
													printf("\nEl promedio de generacion hidraulica en Cantabria es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidrau4);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidrau4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(hidrau4);
													printf("\nLa desviación tipica de generacion hidraulica en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(hidrau4);
													printf("\nLa varianza de generacion hidraulica en Cantabria es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de mayor a menor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=hidrau4[i];
													}
													mayoramenor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de menor a mayor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=hidrau4[i];
													}
													menoramayor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(hidrau4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condición es solo para el caso 1
							break;
							}
						case 2://Hidroeólica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Cantabria.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condición es solo para el caso 2
							break;
							}
						case 3://Eólica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en Cantabria:\n\n");
									strcpy(valoresenergia4[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia4[0].MWh= eoli4[0];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Febrero");
									valoresenergia4[0].MWh= eoli4[1];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Marzo");
									valoresenergia4[0].MWh= eoli4[2];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Abril");
									valoresenergia4[0].MWh= eoli4[3];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Mayo");
									valoresenergia4[0].MWh= eoli4[4];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Junio");
									valoresenergia4[0].MWh= eoli4[5];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Julio");
									valoresenergia4[0].MWh= eoli4[6];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Agosto");
									valoresenergia4[0].MWh= eoli4[7];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Septiembre");
									valoresenergia4[0].MWh= eoli4[8];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Octubre");
									valoresenergia4[0].MWh= eoli4[9];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Noviembre");
									valoresenergia4[0].MWh= eoli4[10];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Diciembre");
									valoresenergia4[0].MWh= eoli4[11];
									printf("%s - %f MWh\t\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Cantabria es:\n\n");
													maximo(eoli4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Cantabria es:\n\n");
													minimo(eoli4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli4);
													printf("\nEl promedio de generacion eolica en Cantabria es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli4);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(eoli4);
													printf("\nLa desviación tipica de generacion eolica en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(eoli4);
													printf("\nLa varianza de generacion eolica en Cantabria es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de mayor a menor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=eoli4[i];
													}
													mayoramenor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de menor a mayor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=eoli4[i];
													}
													menoramayor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(eoli4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condición es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Cantabria:\n\n");
									strcpy(valoresenergia4[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia4[0].MWh= solar4[0];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Febrero");
									valoresenergia4[0].MWh= solar4[1];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Marzo");
									valoresenergia4[0].MWh= solar4[2];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Abril");
									valoresenergia4[0].MWh= solar4[3];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Mayo");
									valoresenergia4[0].MWh= solar4[4];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Junio");
									valoresenergia4[0].MWh= solar4[5];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Julio");
									valoresenergia4[0].MWh= solar4[6];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Agosto");
									valoresenergia4[0].MWh= solar4[7];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Septiembre");
									valoresenergia4[0].MWh= solar4[8];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Octubre");
									valoresenergia4[0].MWh= solar4[9];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Noviembre");
									valoresenergia4[0].MWh= solar4[10];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Diciembre");
									valoresenergia4[0].MWh= solar4[11];
									printf("%s - %f MWh\t\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Cantabria es:\n\n");
													maximo(solar4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Cantabria es:\n\n");
													minimo(solar4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar4);
													printf("\nEl promedio de generacion solar fotovoltaica en Cantabria es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar4);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(solar4);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(solar4);
													printf("\nLa varianza de generacion solar fotovoltaica en Cantabria es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=solar4[i];
													}
													mayoramenor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=solar4[i];
													}
													menoramayor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(solar4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condición es solo para el caso 4
							break;
							}
						case 5://Solar térmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en Asturias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condición es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Cantabria:\n\n");
									strcpy(valoresenergia4[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia4[0].MWh= otras[0];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Febrero");
									valoresenergia4[0].MWh= otras[1];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Marzo");
									valoresenergia4[0].MWh= otras[2];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Abril");
									valoresenergia4[0].MWh= otras[3];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Mayo");
									valoresenergia4[0].MWh= otras[4];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Junio");
									valoresenergia4[0].MWh= otras[5];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Julio");
									valoresenergia4[0].MWh= otras[6];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Agosto");
									valoresenergia4[0].MWh= otras[7];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Septiembre");
									valoresenergia4[0].MWh= otras[8];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Octubre");
									valoresenergia4[0].MWh= otras[9];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Noviembre");
									valoresenergia4[0].MWh= otras[10];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Diciembre");
									valoresenergia4[0].MWh= otras[11];
									printf("%s - %f MWh\t\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Cantabria es:\n\n");
													maximo(otras4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Cantabria es:\n\n");
													minimo(otras4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras4);
													printf("\nEl promedio de generacion de otras renovables en Cantabria es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras4);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(otras4);
													printf("\nLa desviación tipica de generacion de otras renovables en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(otras4);
													printf("\nLa varianza de generacion de otras renovables en Cantabria es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de mayor a menor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=otras4[i];
													}
													mayoramenor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de menor a mayor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=otras4[i];
													}
													menoramayor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(otras4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condición es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de residuos renovables en Cantabria:\n\n");
									strcpy(valoresenergia4[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia4[0].MWh= resid4[0];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Febrero");
									valoresenergia4[0].MWh= resid4[1];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Marzo");
									valoresenergia4[0].MWh= resid4[2];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Abril");
									valoresenergia4[0].MWh= resid4[3];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Mayo");
									valoresenergia4[0].MWh= resid4[4];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Junio");
									valoresenergia4[0].MWh= resid4[5];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Julio");
									valoresenergia4[0].MWh= resid4[6];
									printf("%s - %f MWh\t\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Agosto");
									valoresenergia4[0].MWh= resid4[7];
									printf("%s - %f MWh\t\n\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Septiembre");
									valoresenergia4[0].MWh= resid4[8];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Octubre");
									valoresenergia4[0].MWh= resid4[9];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Noviembre");
									valoresenergia4[0].MWh= resid4[10];
									printf("%s - %f MWh\t",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									strcpy(valoresenergia4[0].mes, "Diciembre");
									valoresenergia4[0].MWh= resid4[11];
									printf("%s - %f MWh\t\n",valoresenergia4[0].mes,valoresenergia4[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case 1://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de residuos renovables en Cantabria es:\n\n");
													maximo(resid4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condición es solo para el caso 1
												break;
											}
											case 2://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de residuos renovables en Cantabria es:\n\n");
													minimo(resid4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condición es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(resid4);
													printf("\nEl promedio de generacion de residuos renovables en Cantabria es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condición es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(resid4);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condición es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(resid4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condición es solo para el caso 5
												break;
											}
											case 6://Desviación típica
											{
												do//Do-while para mantener el texto de desviación
												{
													system("cls");
													desv1= desviacion(resid4);
													printf("\nLa desviación tipica de generacion de residuos renovables en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condición es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(resid4);
													printf("\nLa varianza de generacion de residuos renovables en Cantabria es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condición es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de residuos renovables de mayor a menor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=resid4[i];
													}
													mayoramenor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condición es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de residuos renovables de menor a mayor en Cantabria son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf4[i]=resid4[i];
													}
													menoramayor(rectf4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condición es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(resid4);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condición es solo para el caso 10
												break;
											}
										}
								}while(renovable==7);//La condición es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==4);//La condición es solo para el caso 4
			break;
			}
			
			
	}
	}while(comunidad>=1 && comunidad<=19);//Hago while entre 1 y 19 que son las comunidades autónomas
	return 0;
}
void maximo(float vector[11])//Función que permite al usuario conocer el maximo valor de energia generada
{
	int i;
	float max=0.0;
	typedef struct
	{
		char meses[30]; // Estructura para los meses
	} estructura;
	estructura mes[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};// Vector de la estructura para asociar un mes a cada dato
	estructura aux[12];
	for(i=0;i<12;i++)
	{
		if(vector[i]>max)
		{
			max=vector[i];
			aux[0]=mes[i];
		}
	}
		printf("%s:  %f MWh",aux[0],max);
}
float promedio(float vector[11])//Función que permite al usuario conocer el valor promedio de energia generada
{
   int k;
   float prom,suma=0;
   for(k=0;k<12;k++)
   {
		suma = suma + vector[k];
   }
		prom = suma/12.0;
		return prom;
}
void minimo(float vector[11])//Función que permite al usuario conocer el minimo valor de energia generada
{
	int i;
	float min=1271773327.00;
	typedef struct
	{
		char meses[30]; // Estructura para los meses
	} estructura;
	estructura mes[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};// Vector de la estructura para asociar un mes a cada dato
	estructura aux[12];
	for (i=0;i<12;i++)
	{
		if (vector[i]<min)
		{
			min=vector[i];
			aux[0]=mes[i];
		}
	}
	printf("%s:  %f MWh",aux[0],min);
}
void MWhaeuro(float vector[11]) // Funcion que permite al usuario conocer la cantidad de dinero generada.No se tiene en cuenta el precio por fanjas horarias.
{
	int i;
	double precio;
	typedef struct
	{
		char meses[30]; // Estructura para los meses
	} estructura;
	estructura mes[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};// Vector de la estructura para asociar un mes a cada dato
	printf("Los datos de MWh en euros son:\n\n");
	for(i=0;i<12;i++)
	{
		precio=vector[i]*76.88;
		printf("%s:   %.2lf euros\n",mes[i],precio);
	}
	printf("\n");
}
void MWhaGWh(float vector[11]) // Funcion que permite al usuario conocer la energía generada en cada mes en GWh
{
	int i;
	float Gwh;
	typedef struct
	{
		char meses[30]; // Estructura para los meses
	} estructura;
	estructura mes[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};// Vector de la estructura para asociar un mes a cada dato
	printf("La energia generada mensualmente en gigavatios(GWh) es:\n\n");
	for(i=0;i<12;i++)
	{
		Gwh=vector[i]/1000.00;
		printf("%s:   %.2f GWh\n",mes[i],Gwh);
	}
}
float desviacion(float vector[11])//Funcion que permite hacer la desviación típica
{
	int i;
	float desv,suma=0,div;
	for(i=0;i<12;i++)
	{
		suma=suma+pow((vector[i]-promedio(vector)),2);
	}
	desv=sqrt(suma/12.0);
	return desv;
}
float varianza(float vector[11])//Funcion que permite hacer la varianza
{
	int i;
	float vari,suma=0,div;
	for(i=0;i<12;i++)
	{
		suma=suma+pow((vector[i]-promedio(vector)),2);
	}
	vari=suma/12.0;
	return vari;
}
void mayoramenor(float vector[11])//Funcion que permite ordenar de mayor a menor
{
	int i,j;
	float aux,vectork[11];
	typedef struct // Estructura para los meses
	{
		char meses[30];
	} estructura;
	estructura mes[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"}; // Vector de la estructura para asociar un mes a cada dato
	estructura aux1[12];
	for(i=0;i<12;i++) //Asignacion para recuperacion de valores iniciales
	{
		vectork[i]=vector[i];
	}
	for(i=0;i<12;i++)
    {
		for(j=i+1;j<12;j++)
	    	{
	     	 if (vector[i]<vector[j])
	      {
	        // Si es mayor intercambiamos el contenido de los dos elementos
	        aux = vector[i]; //Necesitamos una variable auxiliar de almacenamiento temporal
	        vector[i] = vector[j];
	        vector[j] = aux;
	        aux1[i]= mes[i];
	        mes[i]=mes[j];
	        mes[j]=aux1[i];
	      }
			}
   	}
	  for(i=0;i<12;i++)
	  {
	    printf("%s:   %f MWh\n",mes[i],vector[i]);
	  }
	for (i=0;i<12;i++) //Recuperacion de valores iniciales
	{
		vector[i]=vectork[i];
	}
}
void menoramayor(float vector[11])//Funcion que permite ordenar de menor a mayor
{
	int i,j;
	float aux,vectork[11];
	typedef struct // Estructura para los meses
	{
		char meses[30];
	} estructura;
	estructura mes[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"}; // Vector de la estructura para asociar un mes a cada dato
	estructura aux1[12];
	for(i=0;i<12;i++) //Asignacion para recuperacion de valores iniciales
	{
		vectork[i]=vector[i];
	}
	for(i=0;i<12;i++)
    {
		for(j=i+1;j<12;j++)
	    {
	      if (vector[i]>vector[j])
	      {
	        // Si es mayor intercambiamos el contenido de los dos elementos
	        aux = vector[i]; //Necesitamos una variable auxiliar de almacenamiento temporal
	        vector[i] = vector[j];
	        vector[j] = aux;
	        aux1[i]=mes[i];
	        mes[i]=mes[j];
	        mes[j]=aux1[i];
	      }
		}
   	}
	  for(i=0;i<12;i++)
	  {
	    printf("%s:   %f MWh\n",mes[i],vector[i]);
	  }
	  	for (i=0;i<12;i++) //Recuperacion de valores iniciales
	{
		vector[i]=vectork[i];
	}
}
void MWhaMJ(float vector[11]) //Funcion que permite al usuario conocer la cantidad de energia generada en MJ
{
	int i;
	double MJ;
	typedef struct // Estructura para los meses
	{
		char meses[30];
	} estructura;
	estructura mes[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"}; // Vector de la estructura para asociar un mes a cada dato
	printf("\nLa energia generada mensualmente en megajulios(MJ) es:\n\n");
	for(i=0;i<12;i++)
	{
		MJ=vector[i]*3600.00;
		printf("%s:   %.2lf MJ\n",mes[i],MJ);
	}
}
