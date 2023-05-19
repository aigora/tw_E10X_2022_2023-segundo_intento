#include<stdio.h>

float  maximo(float vector[11]);
float promedio(float vector[11]);
float minimo(float vector[11]);
void GWhaeuro(float vector[11]);
void GWhaMWh(float vector[11]);
int main()
{
	int comunidad,i,palabra=0,lineas=0;
	float hidrau[11],hidroeoli[11],eoli[11],solar[11],termica[11],otras[11],resid[11],max1,prom1,num;
	char renovable,funciones,maximos,promedios,x2;
	FILE *fAndalucia;
	fAndalucia=fopen("GeneracionAnd2.csv","r");
	if(fAndalucia==NULL)
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fAndalucia, "%c",&x2)!=EOF)
		{
			if(lineas>=5 && lineas<=11)
			{	
				if(x2==',')
				{
					++palabra;
					if(palabra>=0 && palabra<=13)
					{
						fscanf(fAndalucia,"%f",&num);
						if(lineas==5)
						{
							hidrau[i]=num;
							i++;
						}
						if(lineas==6)
						{
							hidroeoli[i]=num;
							i++;
						}
						if(lineas==7)
						{
							eoli[i]=num;
							i++;
						}
						if(lineas==8)
						{
							solar[i]=num;
							i++;
						}
						if(lineas==9)
						{
							termica[i]=num;
							i++;
						}
						if(lineas==10)
						{
							otras[i]=num;
							i++;
						}
						if(lineas==11)
						{
							resid[i]=num;
							i++;
						}
						
					}
				}
			}
			if(x2=='\n')
			{
			++lineas;
			palabra=0;
			i=0;
			}
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
float minimo(float vector[11])
{
	int i;
	float min;
	vector[0]=min;
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
