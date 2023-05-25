#include<stdio.h>
#include<locale.h>
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

int main()
{
	setlocale (LC_CTYPE,"spanish"); // Funcion para poder utilizar lenguaje propio del castellano.
	int comunidad,i,palabra=0,lineas=0;
	float hidrau[11],hidroeoli[11],eoli[11],solar[11],termica[11],otras[11],resid[11],total[11],rectf[11];
	float max1,prom1,min1,num,desv1,vari1;
	char datoAnd;
	int funciones,atras,renovable;
	energia valoresenergia[1];
	FILE *fAndalucia;
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
