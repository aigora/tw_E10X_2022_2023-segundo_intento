#include<stdio.h>

float  maximo(float vector[12]);
int main()
{
	int comunidad,i;
	float hidrau[11],eoli[11],solar[11],termica[11],otras[11],vector[12],max1;
	char num,num2,num3,texto[30];
	FILE *fAndalucia;
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
					scanf(" %c",&num);
					if(num=='a'|| num=='A')
					{
						system("cls");
						break;
					}
					if(num=='1')
					{
						system("cls");
						printf("Elige la operación que quieres hacer\n");
						printf("1.-Maximo\n2.-Minimo\n3.-Promedio\n");
						scanf("   %c",&num2);
						fAndalucia=fopen("Generacion_Andalucia.csv","r");
						if(fAndalucia==NULL)
						{
							printf("Error al abrir el fichero\n");
							return -1;
						}
						else if(num2=='a'|| num2=='A')
						{
							system("cls");
							comunidad=1;
						}
						else
						{
							for(i=0;i<12;i++)
							{
							fscanf(fAndalucia,"%f,",&hidrau[i]);
							}
							fclose(fAndalucia);
							if(num2=='1')
							{
								system("cls");
								max1=maximo(hidrau);
								printf("El maximo es %f\n",max1);
								scanf("  %c",&num3);
								if(num3=='a'|| num3=='A')
								{
									system("cls");
									num=='1';
								}
							}
						}	
					}
					if(num=='2')
					{
						system("cls");
						printf("suuuuuuuu"); 
						scanf("  %c",&num);	
					}
					if(num=='3')
					{
						system("cls");
						fAndalucia=fopen("Generacion_Andalucia.csv","r");
						if(fAndalucia==NULL)
						{
							printf("Error al abrir el fichero\n");
							return -1;
						}
						else
						{
							for(i=0;i<12;i++)
							{
							fscanf(fAndalucia,"%f,",&hidrau[i]);
							}
							
							fscanf(fAndalucia,"\n");
							
							for(i=0;i<12;i++)
							{
							fscanf(fAndalucia,"%f,",&eoli[i]);
							}
							
							for(i=0;i<12;i++)
							{
								printf("%f\n",eoli[i]);
							}
							
							fclose(fAndalucia);
								
							scanf("  %c",&num);
							if(num=='a'|| num=='A')
							{
								system("cls");
								comunidad=1;
							}
						}
					}
					if(num=='4')
					{
						system("cls");	
						printf("hola4");
					}
					if(num=='5')
					{
						system("cls");	
						printf("hola5");
					}
					if(num=='6')
					{
						system("cls");	
						printf("hola6");
					}
					if(num=='7')
					{
						system("cls");	
						printf("hola7");
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
					printf("Pulse A para volver(<----)");
					scanf(" %c",&num);
					if(num=='a'|| num=='A')
					{
						system("cls");
						break;
					}
					if(num=='1')
					{
						system("cls");	
						printf("hola8\n");
						
					}
					if(num=='2')
					{
						system("cls");	
						printf("hola2");
					}
					if(num=='3')
					{
						system("cls");	
						printf("hola3");
					}
					if(num=='4')
					{
						system("cls");	
						printf("hola4");
					}
					if(num=='5')
					{
						system("cls");	
						printf("hola5");
					}
					if(num=='6')
					{
						system("cls");	
						printf("hola6");
					}
					if(num=='7')
					{
						system("cls");	
						printf("hola7");
					}
				}while(comunidad==2);
				break;
			}
	}
	}while((comunidad>=1 && comunidad<=19)||(comunidad==0));
	return 0;
}
float maximo(float vector[12])
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
