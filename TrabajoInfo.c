#include<stdio.h>

float  maximo(float vector[11]);
float promedio(float vector[11]);
int main()
{
	int comunidad,i;
	float hidrau[11],eoli[11],solar[11],termica[11],otras[11],vector[12],max1,prom1;
	char renovable,funciones,maximos,promedios;
	FILE *fAndalucia;
	fAndalucia=fopen("Generacion_Andalucia.csv","r");
	if(fAndalucia==NULL)
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		for(i=0;i<12;i++)
		{
			fscanf(fAndalucia,"%f,",&hidrau[i]);
		}	
	}
	do
	{
	printf("Elige una comunidad autonoma\n");
	printf("1.-Andalucia\n2.-Aragon\n3.-Asturias\n4.-Cantabria\n5.-Castilla-La Mancha\n6.-Castilla y Leon\n7.-Cataluña\n8.-Ceuta\n9.-C.de Madrid\n10.-C.Valencia\n");
	printf("11.-Extremadura\n12.-Galicia\n13.-Islas Baleares\n14.-Islas Canarias\n15.-La Rioja\n16.-Melilla\n17.-Murcia\n18.-Navarra\n19.-Pais Vasco\n");
	scanf("%i",&comunidad);
	switch(comunidad)
	{
		case 1://Andalucia
			{	
				do
				{
					system("cls"); 
					printf("Ahora elige una renovable\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("Pulse A para volver(<----)\n");
					scanf(" %c",&renovable);
					if(renovable=='a' || renovable=='A')
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
													if(promedios=='a' || maximos=='A')
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
						case '2'://Hidroeólica
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
				}while(comunidad==1);
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
	}while((comunidad>=1 && comunidad<=19));
	return 0;
}
float maximo(float vector[11])
{
	int i;
	float max;
	vector[0]=max;
	for(i=0;i<12;i++)
	{
		if(vector[i]>max)
		{
			max=vector[i];
		}
	}
	return max;
}
float promedio(float vector[11])
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
