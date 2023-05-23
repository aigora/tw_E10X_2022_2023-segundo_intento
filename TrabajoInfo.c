#include<stdio.h>
#include<locale.h>
float  maximo(float vector[11]); // Todas las funciones empleadas
float promedio(float vector[11]);
float minimo(float vector[11]);
void MWhaeuro(float vector[11]);
void MWhaGWh(float vector[11]);

int main()
{
	setlocale (LC_CTYPE,"spanish"); // Funcion para poder utilizar lenguaje propio del castellano.
	int comunidad,i,palabra=0,lineas=0;
	float hidrau[11],hidroeoli[11],eoli[11],solar[11],termica[11],otras[11],resid[11],total[11];
	float max1,prom1,min1,num;
	char renovable,funciones,maximos,promedios,minimos,datoAnd,conversiones;
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
	printf("Elige una comunidad autonoma\n");
	printf("1.-Andalucia\n2.-Aragon\n3.-Asturias\n4.-Cantabria\n5.-Castilla-La Mancha\n6.-Castilla y Leon\n7.-Cataluña\n8.-Ceuta\n9.-C.de Madrid\n10.-C.Valencia\n");
	printf("11.-Extremadura\n12.-Galicia\n13.-Islas Baleares\n14.-Islas Canarias\n15.-La Rioja\n16.-Melilla\n17.-Murcia\n18.-Navarra\n19.-Pais Vasco\n");
	scanf("%i",&comunidad);
	switch(comunidad)//Para cada comunidad un numero 
	{
		case 1://Andalucia
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls"); 
					printf("Ahora elige una renovable\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("Pulse A para volver(<----)\n");
					scanf(" %c",&renovable);//Se escoge un caracter ahora puesto que también se quiere volver hacia atrás
					if(renovable=='a' || renovable=='A')//Para poder volver hacia atrás
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un número
					{
						case '1'://Hidraulica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n4.-Mwh a euro\n5.-MWh a GWh\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case '1'://Máximo de los datos.
											{
												do//Do-while para mantener el texto de máximo y que no se acabe el programa
												{
													system("cls");
													max1= maximo(hidrau);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condición es solo para el caso 1
												break;
											}
											case '2'://Mínimo de los datos.
											{
												do//Do-while para mantener el texto de mínimo y que no se acabe el programa
												{
													system("cls");
													min1= minimo(hidrau);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condición es solo para el caso 2
												break;
											}
											case '3'://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidrau);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condición es solo para el caso 3
												break;
											}
											case '4':
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidrau);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='4');//La condición es solo para el caso 4
												break;	
											}
											case '5':
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidrau);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='5');//La condición es solo para el caso 5
											}
										}
								}while(renovable=='1');//La condición es solo para el caso 1
							break;
							}
						case '2'://Hidroeólica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("No hay datos de hidroeolica en esta comunidad autonoma\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable=='2');//La condición es solo para el caso 2
							break;
							}
						case '3'://Eólica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n4.-Mwh a euro\n5.-MWh a GWh\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case '1'://Máximo de los datos.
											{
												do // Do-while para mantener el texto de maximo y que no se acabe el programa
												{
													system("cls");
													max1= maximo(eoli);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condición es solo para el caso 1
												break;
											}
											case '2'://Mínimo de los datos.
											{
												do // Do-while para mantener el texto de minimo y que no se acabe el programa
												{
													system("cls");
													min1= minimo(eoli);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condición es solo para el caso 2
												break;
											}
											case '3'://Promedio de los datos.
											{
												do // Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condición es solo para el caso 3
												break;
												case '4':
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='4');//La condición es solo para el caso 4
												break;	
											}
											case '5':
											{
												do
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='5');//La condición es solo para el caso 5
											}
											}
										}
								}while(renovable=='3');//La condición es solo para el caso 3
							break;
							}
						case '4'://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n4.-Mwh a euro\n5.-MWh a GWh\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case '1'://Máximo de los datos.
											{
												do // Do while para mantener el texto de maximo y que no se acabe el programa
												{
													system("cls");
													max1= maximo(solar);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condición es solo para el caso 1
												break;
											}
											case '2'://Mínimo de los datos.
											{
												do // Do while para mantener el texto de minimo y que no se acabe el programa
												{
													system("cls");
													min1= minimo(solar);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condición es solo para el caso 2
												break;
											}
											case '3'://Promedio de los datos.
											{
												do // Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condición es solo para el caso 3
												break;
											}
											case '4':
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='4');//La condición es solo para el caso 4
												break;	
											}
											case '5': //Do-while para mantener el e¡texto de MWh a GWh y que no se acabe el programa
											{
												do
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='5');//La condición es solo para el caso 5
											}
										}
								}while(renovable=='4');//La condición es solo para el caso 4
							break;
							}
						case '5'://Solar térmica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n4.-Mwh a euro\n5.-MWh a GWh\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case '1'://Máximo de los datos.
											{
												do // Do while para mantener el texto de maximo y que no se acabe el programa
												{
													system("cls");
													max1= maximo(termica);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condición es solo para el caso 1
												break;
											}
											case '2'://Mínimo de los datos.
											{
												do // Do while para mantener el texto de minimo y que no se acabe el programa
												{
													system("cls");
													min1= minimo(termica);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condición es solo para el caso 2
												break;
											}
											case '3'://Promedio de los datos.
											{
												do // Do while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(termica);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condición es solo para el caso 3
												break;
											}
											case '4':
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(termica);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='4');//La condición es solo para el caso 4
												break;	
											}
											case '5': //Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
											{
												do
												{
													system("cls");
													printf("\n");
													MWhaGWh(termica);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='5');//La condición es solo para el caso 5
											}
										}
								}while(renovable=='5');//La condición es solo para el caso 5
							break;
							}
						case '6'://Otras renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n4.-Mwh a euro\n5.-MWh a GWh\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada función un número
										{											
											case '1'://Máximo de los datos.
											{
												do // Do while para mantener el texto de maximo y que no se acabe el programa
												{
													system("cls");
													max1= maximo(otras);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condición es solo para el caso 1
												break;
											}
											case '2'://Mínimo de los datos.
											{
												do // Do while para mantener el texto de minimo y que no se acabe el programa
												{
													system("cls");
													min1= minimo(otras);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condición es solo para el caso 2
												break;
											}
											case '3'://Promedio de los datos.
											{
												do // Do while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para poder volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condición es solo para el caso 3
												break;
											}
											case '4':
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='4');//La condición es solo para el caso 4
												break;	
											}
											case '5': //Do-while para mantener el e¡texto de MWh a GWh y que no se acabe el programa
											{
												do
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para volver hacia atrás
													{
														system("cls");
														break;
													}
												}while(funciones=='5');//La condición es solo para el caso 5
											}
										}
								}while(renovable=='6');//La condición es solo para el caso 6
							break;
							}
						case '7'://Residuos renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("No hay datos de residuos renovables en esta comunidad autonoma\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable=='7');//La condición es solo para el caso 7
							break;
							}			
					}
				}while(comunidad==1);//La condición es solo para el caso 1
			break;
			}
		case 2://Aragón
			{	
				do
				{
					system("cls"); 
					printf("Ahora elige una renovable\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("Pulse A para volver(<----)\n");
					scanf(" %c",&renovable);
					if(renovable=='a' ||renovable=='A')
					{
						system("cls");
						break;
					}
					switch(renovable)
					{
						case '1'://Hidraulica
							{
								do
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')
									{
										system("cls");
										break;
									}
									switch(funciones)
										{											
											case '1'://Máximo de los datos.
											{
												do
												{
													system("cls");
													max1= maximo(hidrau);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')
													{
														system("cls");
														break;
													}
												}while(funciones=='1');
												break;
											}
											case '3'://Promedio de los datos.
											{
												do
												{
													system("cls");
													prom1= promedio(hidrau);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')
													{
														system("cls");
														break;
													}
												}while(funciones=='3');
												break;
											}
										}
								}while(renovable=='1');
							break;
							}
							case '2'://Hidroélica
							{
								do
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')
									{
										system("cls");
										break;
									}
									switch(funciones)
										{											
											case '1'://Máximo de los datos.
											{
												do
												{
													system("cls");
													max1= maximo(hidrau);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')
													{
														system("cls");
														break;
													}
												}while(funciones=='1');
												break;
											}
											case '3'://Promedio de los datos.
											{
												do
												{
													system("cls");
													prom1= promedio(hidrau);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')
													{
														system("cls");
														break;
													}
												}while(funciones=='3');
												break;
											}
										}
								}while(renovable=='2');
							break;
							}
					}
				}while(comunidad==2);
				break;
			}
	}
	}while(comunidad>=1 && comunidad<=19);//Hago while entre 1 y 19 que son las comunidades autónomas
	return 0;
}
float maximo(float vector[11])//Función que permite al usuario conocer el maximo valor de energia generada
{
	int i;
	float max;
	max=vector[0];
	for(i=0;i<12;i++)
	{
		if(vector[i]>max)
		{
			max=vector[i];
		}
	}
	return max;
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
float minimo(float vector[11])//Función que permite al usuario conocer el minimo valor de energia generada
{
	int i;
	float min;
	min=vector[0];
	for (i=0;i<12;i++)
	{
		if (vector[i]<min)
		{
			min=vector[i];
		}
	}
	return min;
}
void MWhaeuro(float vector[11]) // Funcion que permite al usuario conocer la cantidad de dinero generada.No se tiene en cuenta el precio por fanjas horarias.
{
	int i;
	float precio;
	for (i=0;i<12;i++)
	{
		precio=vector[i]*76.88;
		printf("El precio de la energia generada en el mes %i fue %.2f euros.\n",i+1,precio);
	}
	printf("\n");
}
void MWhaGWh(float vector[11]) // Funcion que permite al usuario conocer la energía generada en cada mes en GWh
{
	int i;
	float Gwh;
	for(i=0;i<12;i++)
	{
		Gwh=vector[i]/1000.0;
		printf("La energia generada en el mes %i en Gwh es %.2f\n",i+1,Gwh);
	}
	printf("\n");
}

