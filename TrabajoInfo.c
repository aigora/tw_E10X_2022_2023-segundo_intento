#include<stdio.h>

float  maximo(float vector[11]);
float promedio(float vector[11]);
float minimo(float vector[11]);
void GWhaeuro(float vector[11]);
void GWhaMWh(float vector[11]);

int main()
{
	int comunidad,i,palabra=0,lineas=0;
	float hidrau[11],hidroeoli[11],eoli[11],solar[11],termica[11],otras[11],resid[11],total[11];
	float max1,prom1,min1,num;
	char renovable,funciones,maximos,promedios,minimos,datoAnd,conversiones;
	FILE *fAndalucia;
	fAndalucia=fopen("GeneracionAnd2.csv","r");
	if(fAndalucia==NULL)//Lectura fichero de Andaluc�a
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
						fscanf(fAndalucia,"%f",&num);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas==5)//Hidr�ulica
						{
							hidrau[i]=num;
							i++;
						}
						if(lineas==6)//E�lica
						{
							eoli[i]=num;
							i++;
						}
						if(lineas==7)//Solar fotovoltaica
						{
							solar[i]=num;
							i++;
						}
						if(lineas==8)//Solar t�rmica
						{
							termica[i]=num;
							i++;
						}
						if(lineas==9)//Otras renovables
						{
							otras[i]=num;
							i++;
						}
						if(lineas==10)//Genereaci�n total
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
	printf("1.-Andalucia\n2.-Aragon\n3.-Asturias\n4.-Cantabria\n5.-Castilla-La Mancha\n6.-Castilla y Leon\n7.-Catalu�a\n8.-Ceuta\n9.-C.de Madrid\n10.-C.Valencia\n");
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
					scanf(" %c",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable=='a' || renovable=='A')//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case '1'://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case '1'://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													max1= maximo(hidrau);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condici�n es solo para el caso 1
												break;
											}
											case '2'://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													min1= minimo(hidrau);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condici�n es solo para el caso 2
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
													if(promedios=='a' || promedios=='A')//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condici�n es solo para el caso 3
												break;
											}
										}
								}while(renovable=='1');//La condici�n es solo para el caso 1
							break;
							}
						case '2'://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("No hay datos de hidroeolica en esta comunidad autonoma\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable=='2');//La condici�n es solo para el caso 2
							break;
							}
						case '3'://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case '1'://M�ximo de los datos.
											{
												do
												{
													system("cls");
													max1= maximo(eoli);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condici�n es solo para el caso 1
												break;
											}
											case '2'://M�nimo de los datos.
											{
												do
												{
													system("cls");
													min1= minimo(eoli);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condici�n es solo para el caso 2
												break;
											}
											case '3'://Promedio de los datos.
											{
												do
												{
													system("cls");
													prom1= promedio(eoli);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condici�n es solo para el caso 3
												break;
											}
										}
								}while(renovable=='3');//La condici�n es solo para el caso 3
							break;
							}
						case '4'://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case '1'://M�ximo de los datos.
											{
												do
												{
													system("cls");
													max1= maximo(solar);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condici�n es solo para el caso 1
												break;
											}
											case '2'://M�nimo de los datos.
											{
												do
												{
													system("cls");
													min1= minimo(solar);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condici�n es solo para el caso 2
												break;
											}
											case '3'://Promedio de los datos.
											{
												do
												{
													system("cls");
													prom1= promedio(solar);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condici�n es solo para el caso 3
												break;
											}
										}
								}while(renovable=='4');//La condici�n es solo para el caso 4
							break;
							}
						case '5'://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case '1'://M�ximo de los datos.
											{
												do
												{
													system("cls");
													max1= maximo(termica);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condici�n es solo para el caso 1
												break;
											}
											case '2'://M�nimo de los datos.
											{
												do
												{
													system("cls");
													min1= minimo(termica);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condici�n es solo para el caso 2
												break;
											}
											case '3'://Promedio de los datos.
											{
												do
												{
													system("cls");
													prom1= promedio(termica);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condici�n es solo para el caso 3
												break;
											}
										}
								}while(renovable=='5');//La condici�n es solo para el caso 5
							break;
							}
						case '6'://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("Elige la operacion que quieres hacer\n");
									printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case '1'://M�ximo de los datos.
											{
												do
												{
													system("cls");
													max1= maximo(otras);
													printf("El maximo es %f\n",max1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&maximos);
													if(maximos=='a'||maximos=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='1');//La condici�n es solo para el caso 1
												break;
											}
											case '2'://M�nimo de los datos.
											{
												do
												{
													system("cls");
													min1= minimo(otras);
													printf("El maximo es %f\n",min1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&minimos);
													if(minimos=='a'||minimos=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='2');//La condici�n es solo para el caso 2
												break;
											}
											case '3'://Promedio de los datos.
											{
												do
												{
													system("cls");
													prom1= promedio(otras);
													printf("El promedio es %f\n",prom1);
													printf("Pulse A para volver(<----)\n");
													scanf("   %c",&promedios);
													if(promedios=='a' || promedios=='A')//Para poder volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones=='3');//La condici�n es solo para el caso 3
												break;
											}
										}
								}while(renovable=='6');//La condici�n es solo para el caso 6
							break;
							}
						case '7'://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("No hay datos de residuos renovables en esta comunidad autonoma\n");
									printf("Pulse A para volver(<----)\n");
									scanf("  %c",&funciones);
									if(funciones=='a' || funciones=='A')//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable=='7');//La condici�n es solo para el caso 7
							break;
							}			
					}
				}while(comunidad==1);//La condici�n es solo para el caso 1
			break;
			}
		case 2://Arag�n
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
											case '1'://M�ximo de los datos.
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
							case '2'://Hidro�lica
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
											case '1'://M�ximo de los datos.
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
	}while(comunidad>=1 && comunidad<=19);//Hago while entre 1 y 19 que son las comunidades aut�nomas
	return 0;
}
float maximo(float vector[11])//Funci�n m�ximo
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
float promedio(float vector[11])//Funci�n promedio
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
float minimo(float vector[11])//Funci�n m�nimo
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
void GWhaeuro(float vector[11]) // No se tienen en cuenta el precio por fanjas horarias.
{
	int i;
	float precio;
	for (i=0;i<12;i++)
	{
		precio=vector[i]*67.81;
		printf("El precio de la energia generada en el mes %i fue %.2f.",i+1,precio);
	}
}
void GWhaMWh(float vector[11])
{
	int i;
	float Mwh;
	for(i=0;i<12;i++)
	{
		Mwh=vector[i]*1000;
		printf("La energia generada en el mes %i en Mwh es %.2f",i+1,Mwh);
	}
}

