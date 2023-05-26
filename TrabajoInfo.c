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

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia5;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia6;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia7;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia8;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia9;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia10;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia11;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia15;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia16;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia17;

int main()
{
	int comunidad,i;
	int palabra=0,lineas=0,palabra2=0,lineas2=0,palabra3=0,lineas3=0,palabra4=0,lineas4=0,palabra5=0,lineas5=0,palabra6=0,lineas6=0,palabra7=0,lineas7=0;
	int palabra8=0,lineas8=0,palabra9=0,lineas9=0,palabra10=0,lineas10=0,palabra11=0,lineas11=0;
	int palabra15=0,lineas15=0,palabra16=0,lineas16=0,palabra17=0,lineas17=0;
	float hidrau[11],hidroeoli[11],eoli[11],solar[11],termica[11],otras[11],resid[11],total[11],rectf[11];
	float hidrau2[11],hidroeoli2[11],eoli2[11],solar2[11],termica2[11],otras2[11],resid2[11],total2[11],rectf2[11];
	float hidrau3[11],hidroeoli3[11],eoli3[11],solar3[11],termica3[11],otras3[11],resid3[11],total3[11],rectf3[11];
	float hidrau4[11],hidroeoli4[11],eoli4[11],solar4[11],termica4[11],otras4[11],resid4[11],total4[11],rectf4[11];
	float hidrau5[11],hidroeoli5[11],eoli5[11],solar5[11],termica5[11],otras5[11],resid5[11],total5[11],rectf5[11];
	float hidrau6[11],hidroeoli6[11],eoli6[11],solar6[11],termica6[11],otras6[11],resid6[11],total6[11],rectf6[11];
	float hidrau7[11],hidroeoli7[11],eoli7[11],solar7[11],termica7[11],otras7[11],resid7[11],total7[11],rectf7[11];
	float hidrau8[11],hidroeoli8[11],eoli8[11],solar8[11],termica8[11],otras8[11],resid8[11],total8[11],rectf8[11];
	float hidrau9[11],hidroeoli9[11],eoli9[11],solar9[11],termica9[11],otras9[11],resid9[11],total9[11],rectf9[11];
	float hidrau10[11],hidroeoli10[11],eoli10[11],solar10[11],termica10[11],otras10[11],resid10[11],total10[11],rectf10[11];
	float hidrau11[11],hidroeoli11[11],eoli11[11],solar11[11],termica11[11],otras11[11],resid11[11],total11[11],rectf11[11];
	float hidrau15[11],hidroeoli15[11],eoli15[11],solar15[11],termica15[11],otras15[11],resid15[11],total15[11],rectf15[11];
	float hidrau16[11],hidroeoli16[11],eoli16[11],solar16[11],termica16[11],otras16[11],resid16[11],total16[11],rectf16[11];
	float hidrau17[11],hidroeoli17[11],eoli17[11],solar17[11],termica17[11],otras17[11],resid17[11],total17[11],rectf17[11];
		
	float max1,prom1,min1,desv1,vari1;
	float num,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num15,num16,num17;
	char datoAnd,datoArg,datoAst,datoCant,datoMan,datoLeon,datoCat,datoCeu,datoMad,datoVal,datoExtr,datoLarioja,datoMel,datoMurc;
	int funciones,atras,renovable;
	energia valoresenergia[1];
	energia2 valoresenergia2[1];
	energia3 valoresenergia3[1];
	energia4 valoresenergia4[1];
	energia5 valoresenergia5[1];
	energia6 valoresenergia6[1];
	energia7 valoresenergia7[1];
	energia8 valoresenergia8[1];
	energia9 valoresenergia9[1];
	energia10 valoresenergia10[1];
	energia11 valoresenergia11[1];
	energia15 valoresenergia15[1];
	energia16 valoresenergia16[1];
	energia16 valoresenergia17[1];
	FILE *fAndalucia;
	FILE *fAragon;
	FILE *fAsturias;
	FILE *fCantabria;
	FILE *fCastillalaMancha;
	FILE *fLeon;
	FILE *fCatalunya;
	FILE *fMadrid;
	FILE *fValencia;
	FILE *fExtremadura;
	FILE *fLarioja;
	FILE *fMelilla;
	FILE *fMurcia;
	
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
	
	fCastillalaMancha=fopen("GeneracionCast_M2.csv","r");
	if(fCastillalaMancha==NULL)//Lectura fichero de Andalucía
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fCastillalaMancha, "%c",&datoMan)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas5>=5 && lineas5<=10)//Para estas lineas interesan los datos
			{	
				if(datoMan==',')//Cuando hay una coma suma una palabra
				{
					++palabra5;
					if(palabra5>0 && palabra5<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fCastillalaMancha,"%f",&num5);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas5==5)//Hidráulica
						{
							hidrau5[i]=num5;
							i++;
						}
						if(lineas5==6)//Eólica
						{
							eoli5[i]=num5;
							i++;
						}
						if(lineas5==7)//Solar fotovoltaica
						{
							solar5[i]=num5;
							i++;
						}
						if(lineas5==8)//Otras renovables
						{
							otras5[i]=num5;
							i++;
						}
						if(lineas5==9)//Totales
						{
							total5[i]=num5;
							i++;
						}		
					}
				}
			}
			if(datoMan=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas5;
			palabra5=0;
			i=0;
			}
		}	
	}
	
	fLeon=fopen("GeneracionCast_L2.csv","r");
	if(fLeon==NULL)//Lectura fichero de Andalucía
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fLeon, "%c",&datoLeon)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas6>=5 && lineas6<=10)//Para estas lineas interesan los datos
			{	
				if(datoLeon==',')//Cuando hay una coma suma una palabra
				{
						++palabra6;
					if(palabra6>0 && palabra6<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
				    	fscanf(fLeon,"%f",&num6);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas6==5)//Hidráulica
						{
							hidrau6[i]=num6;
							i++;
						}
						if(lineas6==6)//Eólica
						{
							eoli6[i]=num6;
							i++;
						}
						if(lineas6==7)//Solar fotovoltaica
						{
							solar6[i]=num6;
							i++;
						}
						if(lineas6==8)// Solar termica
						{
							termica6[i]=num6;
							i++;
						}
						if(lineas6==9)// Otras renovables
						{
							otras6[i]=num6;
							i++;
						}	
						if(lineas6==10)// Otras renovables
						{
							total6[i]=num6;
							i++;
						}	
					}
				}
			}
			if(datoLeon=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas6;
			palabra6=0;
			i=0;
			}
		}	
	}
	
	fCatalunya=fopen("GeneracionCata2.csv","r");
	if(fCatalunya==NULL)//Lectura fichero de Andalucía
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fCatalunya, "%c",&datoCat)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas7>=5 && lineas7<=10)//Para estas lineas interesan los datos
			{	
				if(datoCat==',')//Cuando hay una coma suma una palabra
				{
						++palabra7;
					if(palabra7>0 && palabra7<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
				    	fscanf(fCatalunya,"%f",&num7);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas7==5)//Hidráulica
						{
							hidrau7[i]=num7;
							i++;
						}
						if(lineas7==6)//Eólica
						{
							eoli7[i]=num7;
							i++;
						}
						if(lineas7==7)//Solar fotovoltaica
						{
							solar7[i]=num7;
							i++;
						}
						if(lineas7==8)// Solar termica
						{
							termica7[i]=num7;
							i++;
						}
						if(lineas7==9)// Otras renovables
						{
							otras7[i]=num7;
							i++;
						}	
						if(lineas7==10)// Residuos renovables
						{
							resid7[i]=num7;
							i++;
						}
						if(lineas7==11)// Totales
						{
							total7[i]=num7;
							i++;
						}	
					}
				}
			}
			if(datoCat=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas7;
			palabra7=0;
			i=0;
			}
		}	
	}
	
	fMadrid=fopen("GeneracionMad2.csv","r");
	if(fMadrid==NULL)//Lectura fichero de Andalucía
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fMadrid, "%c",&datoMad)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas9>=5 && lineas9<=10)//Para estas lineas interesan los datos
			{	
				if(datoMad==',')//Cuando hay una coma suma una palabra
				{
						++palabra9;
					if(palabra9>0 && palabra9<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
				    	fscanf(fMadrid,"%f",&num9);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas9==5)//Hidráulica
						{
							hidrau9[i]=num9;
							i++;
						}
						if(lineas9==6)//Solar fotovoltaica
						{
							solar9[i]=num9;
							i++;
						}
						if(lineas9==7)//Otras renovables
						{
							otras9[i]=num9;
							i++;
						}
						if(lineas9==8)// Residuos renovables
						{
							resid9[i]=num9;
							i++;
						}
						if(lineas7==9)// Totales
						{
							total9[i]=num9;
							i++;
						}	
					}
				}
			}
			if(datoMad=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas9;
			palabra9=0;
			i=0;
			}
		}	
	}
	fValencia=fopen("GeneracionVal2.csv","r");
	if(fValencia==NULL)//Lectura fichero de Valencia
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fValencia, "%c",&datoVal)!=EOF)//Lee el fichero hasta el final como si fuera un caracter
		{
			if(lineas10>=5 && lineas10<=9)//Para estas lineas interesan los datos
			{	
				if(datoVal==',')//Cuando hay una coma suma una palabra
				{
					++palabra10;
					if(palabra10>0 && palabra10<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fValencia,"%f",&num10);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas10==5)//Hidráulica
						{
							hidrau10[i]=num10;
							i++;
						}
						if(lineas10==6)//Eólica
						{
							eoli10[i]=num10;
							i++;
						}
						if(lineas10==7)//Solar fotovoltaica
						{
							solar10[i]=num10;
							i++;
						}
						if(lineas10==8)//Solar termica
						{
							termica10[i]=num10;
							i++;
						}
						if(lineas10==9)//Otras renovables
						{
							otras10[i]=num10;
							i++;
						}
						if(lineas10==10)//Generacion total
						{
							total10[i]=num10;
							i++;
						}
					}
				}
			}
			if(datoVal=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas10;
			palabra10=0;
			i=0;
			}
		}	
	}
	
	fExtremadura=fopen("GeneracionExtr2.csv","r");
	if(fExtremadura==NULL)//Lectura fichero de Valencia
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fExtremadura, "%c",&datoExtr)!=EOF)//Lee el fichero hasta el final como si fuera un caracter
		{
			if(lineas11>=5 && lineas11<=9)//Para estas lineas interesan los datos
			{	
				if(datoExtr==',')//Cuando hay una coma suma una palabra
				{
					++palabra11;
					if(palabra11>0 && palabra11<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fExtremadura,"%f",&num11);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas11==5)//Hidráulica
						{
							hidrau11[i]=num11;
							i++;
						}
						if(lineas11==6)//Eólica
						{
							eoli11[i]=num11;
							i++;
						}
						if(lineas11==7)//Solar fotovoltaica
						{
							solar11[i]=num11;
							i++;
						}
						if(lineas11==8)//Solar termica
						{
							termica11[i]=num11;
							i++;
						}
						if(lineas11==9)//Otras renovables
						{
							otras11[i]=num11;
							i++;
						}
						if(lineas11==10)//Generacion total
						{
							total11[i]=num11;
							i++;
						}
					}
				}
			}
			if(datoExtr=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas11;
			palabra11=0;
			i=0;
			}
		}	
	}
	
	fLarioja=fopen("Generacion2LaRioja.csv","r");
	if(fLarioja==NULL)//Lectura fichero de La Rioja
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fLarioja, "%c",&datoLarioja)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas15>=5 && lineas15<=9)//Para estas lineas interesan los datos
			{	
				if(datoLarioja==',')//Cuando hay una coma suma una palabra
				{
					++palabra15;
					if(palabra15>0 && palabra15<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fLarioja,"%f",&num15);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas15==5)//Hidráulica
						{
							hidrau15[i]=num15;
							i++;
						}
						if(lineas15==6)//Eólica
						{
							eoli15[i]=num15;
							i++;
						}
						if(lineas15==7)//Solar fotovoltaica
						{
							solar15[i]=num15;
							i++;
						}
						if(lineas15==8)//Otras renovables
						{
							otras15[i]=num15;
							i++;
						}
						if(lineas15==9)//Genereación total
						{
							total15[i]=num15;
							i++;
						}
						
					}
				}
			}
			if(datoLarioja=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas15;
			palabra15=0;
			i=0;
			}
		}	
	}
	
	fMelilla=fopen("GeneracionMelilla2.csv","r");
	if(fMelilla==NULL)//Lectura fichero de Melilla
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fMelilla, "%c",&datoMel)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas16>=5 && lineas16<=8)//Para estas lineas interesan los datos
			{	
				if(datoMel==',')//Cuando hay una coma suma una palabra
				{
					++palabra16;
					if(palabra16>0 && palabra16<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fMelilla,"%f",&num16);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas16==5)//Solar fotovoltaica
						{
							solar16[i]=num16;
							i++;
						}
						if(lineas16==6)//Residuos renovables
						{
							resid16[i]=num16;
							i++;
						}
						if(lineas16==7)//Genereación total
						{
							total16[i]=num16;
							i++;
						}
						
					}
				}
			}
			if(datoMel=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas16;
			palabra16=0;
			i=0;
			}
		}
	}
	
	fMurcia=fopen("Generacion2Murc.csv","r");
	if(fMurcia==NULL)//Lectura fichero de Murcia
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fMurcia, "%c",&datoMurc)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas17>=5 && lineas17<=10)//Para estas lineas interesan los datos
			{	
				if(datoMurc==',')//Cuando hay una coma suma una palabra
				{
					++palabra17;
					if(palabra17>0 && palabra17<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fMurcia,"%f",&num17);//Hacemos otro scanf para poder leer los valores de cada linea como un número
						if(lineas17==5)//Hidráulica
						{
							hidrau17[i]=num17;
							i++;
						}
						if(lineas17==6)//Eólica
						{
							eoli17[i]=num17;
							i++;
						}
						if(lineas17==7)//Solar fotovoltaica
						{
							solar17[i]=num17;
							i++;
						}
						if(lineas17==8)//Solar termica
						{
							termica17[i]=num17;
							i++;
						}
						if(lineas17==9)//Otras renovables
						{
							otras17[i]=num17;
							i++;
						}
						if(lineas17==10)//Genereación total
						{
							total17[i]=num17;
							i++;
						}
						
					}
				}
			}
			if(datoMurc=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas17;
			palabra17=0;
			i=0;
			}
		}	
	}
	
	do//Do-while para mantener el texto inicial si se elige una comunidad dentro de las que hay
	{
	printf("\nSe han recogido datos de generacion de energia mediante estructuras\nrenovables en cada comunidad autonoma mensualmente en el ano 2022\n");
	printf("\nIntroduzca el numero de la comunidad que quiere seleccionar:\n\n");
	printf("1.-Andalucia\n2.-Aragon\n3.-Asturias\n4.-Cantabria\n5.-Castilla-La Mancha\n6.-Castilla y Leon\n7.-Catalunya\n8.-Ceuta\n9.-C.de Madrid\n10.-C.Valencia\n");
	printf("11.-Extremadura\n12.-Galicia\n13.-Islas Baleares\n14.-Islas Canarias\n15.-La Rioja\n16.-Melilla\n17.-Murcia\n18.-Navarra\n19.-Pais Vasco\n");
	printf("\n\nPulse 0 para salir del programa(<----)\n");
		scanf("   %i",&comunidad);
		if(comunidad==0)//Para sqlir del programa
		{
			system("cls");
			break;
		}
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
			case 5:// Castilla-La Mancha
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Castilla-La Mancha:\n\n");
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
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Castilla-La Mancha:\n\n");
									strcpy(valoresenergia5[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia5[0].MWh= hidrau5[0];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Febrero");
									valoresenergia5[0].MWh= hidrau5[1];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Marzo");
									valoresenergia5[0].MWh= hidrau5[2];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Abril");
									valoresenergia5[0].MWh= hidrau5[3];
									printf("%s - %f MWh\t\n\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Mayo");
									valoresenergia5[0].MWh= hidrau5[4];
									printf("%s - %f MWh\t\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Junio");
									valoresenergia5[0].MWh= hidrau5[5];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Julio");
									valoresenergia5[0].MWh= hidrau5[6];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Agosto");
									valoresenergia5[0].MWh= hidrau5[7];
									printf("%s - %f MWh\t\n\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Septiembre");
									valoresenergia5[0].MWh= hidrau5[8];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Octubre");
									valoresenergia5[0].MWh= hidrau5[9];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Noviembre");
									valoresenergia5[0].MWh= hidrau5[10];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Diciembre");
									valoresenergia5[0].MWh= hidrau5[11];
									printf("%s - %f MWh\t\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
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
													printf("\nEl maximo de generacion hidraulica en Castilla-La Mancha es:\n\n");
													maximo(hidrau5);
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
													printf("\nEl minimo de generacion hidraulica en Castilla-La Mancha es:\n\n");
													minimo(hidrau5);
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
													prom1= promedio(hidrau5);
													printf("\nEl promedio de generacion hidraulica en Castilla-La Mancha es %f MWh.\n",prom1);
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
													MWhaeuro(hidrau5);
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
													MWhaGWh(hidrau5);
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
													desv1= desviacion(hidrau5);
													printf("\nLa desviación tipica de generacion hidraulica en Castilla-La Mancha es %.2f MWh.\n",desv1);
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
													vari1=varianza(hidrau5);
													printf("\nLa varianza de generacion hidraulica en Castilla-La Mancha es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion hidraulica de mayor a menor en Castilla-La Mancha son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf5[i]=hidrau5[i];
													}
													mayoramenor(rectf5);
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
													printf("Los datos de generacion hidraulica de menor a mayor en Castilla-La Manchason:\n\n");
													for(i=0;i<12;i++)
													{
														rectf5[i]=hidrau5[i];
													}
													menoramayor(rectf5);
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
													MWhaMJ(hidrau5);
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
									printf("\nNo hay datos de generacion hidroeolica en Castilla-La Mancha.\n");
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
									printf("\nA continuacion se muestran los datos de generacion eolica en Castilla-La Mancha:\n\n");
									strcpy(valoresenergia5[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia5[0].MWh= eoli5[0];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Febrero");
									valoresenergia5[0].MWh= eoli5[1];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Marzo");
									valoresenergia5[0].MWh= eoli5[2];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Abril");
									valoresenergia5[0].MWh= eoli5[3];
									printf("%s - %f MWh\t\n\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Mayo");
									valoresenergia5[0].MWh= eoli5[4];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Junio");
									valoresenergia5[0].MWh= eoli5[5];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Julio");
									valoresenergia5[0].MWh= eoli5[6];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Agosto");
									valoresenergia5[0].MWh= eoli5[7];
									printf("%s - %f MWh\t\n\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Septiembre");
									valoresenergia5[0].MWh= eoli5[8];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Octubre");
									valoresenergia5[0].MWh= eoli5[9];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Noviembre");
									valoresenergia5[0].MWh= eoli5[10];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Diciembre");
									valoresenergia5[0].MWh= eoli5[11];
									printf("%s - %f MWh\t\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
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
													printf("\nEl maximo de generacion eolica en Castilla-La Manchaes:\n\n");
													maximo(eoli5);
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
													printf("\nEl minimo de generacion eolica en Castilla-La Mancha es:\n\n");
													minimo(eoli5);
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
													prom1= promedio(eoli5);
													printf("\nEl promedio de generacion eolica en Castilla-La Mancha es %f MWh.\n",prom1);
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
													MWhaeuro(eoli5);
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
													MWhaGWh(eoli5);
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
													desv1= desviacion(eoli5);
													printf("\nLa desviación tipica de generacion eolica en Castilla-La Mancha es %.2f MWh.\n",desv1);
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
													vari1=varianza(eoli5);
													printf("\nLa varianza de generacion eolica en Castilla-La Mancha es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion eolica de mayor a menor en Castilla-La Mancha son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf5[i]=eoli5[i];
													}
													mayoramenor(rectf5);
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
													printf("Los datos de generacion eolica de menor a mayor en Castilla-La Mancha son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf5[i]=eoli5[i];
													}
													menoramayor(rectf5);
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
													MWhaMJ(eoli5);
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
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Castilla-La Mancha:\n\n");
									strcpy(valoresenergia5[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia5[0].MWh= solar5[0];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Febrero");
									valoresenergia5[0].MWh= solar5[1];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Marzo");
									valoresenergia5[0].MWh= solar5[2];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Abril");
									valoresenergia5[0].MWh= solar5[3];
									printf("%s - %f MWh\t\n\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Mayo");
									valoresenergia5[0].MWh= solar5[4];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Junio");
									valoresenergia5[0].MWh= solar5[5];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Julio");
									valoresenergia5[0].MWh= solar5[6];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Agosto");
									valoresenergia5[0].MWh= solar5[7];
									printf("%s - %f MWh\t\n\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Septiembre");
									valoresenergia5[0].MWh= solar5[8];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Octubre");
									valoresenergia5[0].MWh= solar5[9];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Noviembre");
									valoresenergia5[0].MWh= solar5[10];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Diciembre");
									valoresenergia5[0].MWh= solar5[11];
									printf("%s - %f MWh\t\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
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
													printf("\nEl maximo de generacion solar fotovoltaica en Castilla-La Mancha es:\n\n");
													maximo(solar5);
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
													printf("\nEl minimo de generacion solar fotovoltaica en Castilla-La Mancha es:\n\n");
													minimo(solar5);
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
													prom1= promedio(solar5);
													printf("\nEl promedio de generacion solar fotovoltaica en Castilla-La Mancha es %f MWh.\n",prom1);
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
													MWhaeuro(solar5);
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
													MWhaGWh(solar5);
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
													desv1= desviacion(solar5);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Castilla-La Mancha es %.2f MWh.\n",desv1);
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
													vari1=varianza(solar5);
													printf("\nLa varianza de generacion solar fotovoltaica en Castilla-La Mancha es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Castilla-La Mancha son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf5[i]=solar5[i];
													}
													mayoramenor(rectf5);
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
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Castilla-La Mancha son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf5[i]=solar5[i];
													}
													menoramayor(rectf5);
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
													MWhaMJ(solar5);
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
									printf("\nNo hay datos de generacion solar termica en Castilla-La Mancha.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condición es solo para el caso 7
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Castilla-La Mancha:\n\n");
									strcpy(valoresenergia5[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia5[0].MWh= otras5[0];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Febrero");
									valoresenergia5[0].MWh= otras5[1];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Marzo");
									valoresenergia5[0].MWh= otras5[2];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Abril");
									valoresenergia5[0].MWh= otras5[3];
									printf("%s - %f MWh\t\n\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Mayo");
									valoresenergia5[0].MWh= otras5[4];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Junio");
									valoresenergia5[0].MWh= otras5[5];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Julio");
									valoresenergia5[0].MWh= otras5[6];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Agosto");
									valoresenergia5[0].MWh= otras5[7];
									printf("%s - %f MWh\t\n\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Septiembre");
									valoresenergia5[0].MWh= otras5[8];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Octubre");
									valoresenergia5[0].MWh= otras5[9];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Noviembre");
									valoresenergia5[0].MWh= otras5[10];
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
									strcpy(valoresenergia5[0].mes, "Diciembre");
									valoresenergia5[0].MWh= otras5[11];
									printf("%s - %f MWh\t\n",valoresenergia5[0].mes,valoresenergia5[0].MWh);
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
													printf("\nEl maximo de generacion de otras renovables en Castilla-La Mancha es:\n\n");
													maximo(otras5);
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
													printf("\nEl minimo de generacion de otras renovables en Castilla-La Manchaes:\n\n");
													minimo(otras5);
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
													prom1= promedio(otras5);
													printf("\nEl promedio de generacion de otras renovables en Castilla-La Mancha es %f MWh.\n",prom1);
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
													MWhaeuro(otras5);
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
													MWhaGWh(otras5);
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
													desv1= desviacion(otras5);
													printf("\nLa desviación tipica de generacion de otras renovables en Castilla-La Manchaes %.2f MWh.\n",desv1);
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
													vari1=varianza(otras5);
													printf("\nLa varianza de generacion de otras renovables en Castilla-La Mancha es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de otras renovables de mayor a menor en Castilla-La Manchason:\n\n");
													for(i=0;i<12;i++)
													{
														rectf5[i]=otras5[i];
													}
													mayoramenor(rectf5);
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
													printf("Los datos de generacion de otras renovables de menor a mayor en Castilla-La Manchason:\n\n");
													for(i=0;i<12;i++)
													{
														rectf5[i]=otras5[i];
													}
													menoramayor(rectf5);
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
													MWhaMJ(otras5);
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
									printf("\nNo hay datos de generacion de residuos renovables en Castilla-La Mancha.\n");
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
				}while(comunidad==5);//La condición es solo para el caso 5
			break;
		}
		case 6: // Castilla y Leon
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Castilla y Leon:\n\n");
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
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Castilla y Leon:\n\n");
									strcpy(valoresenergia6[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia6[0].MWh= hidrau6[0];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Febrero");
									valoresenergia6[0].MWh= hidrau6[1];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Marzo");
									valoresenergia6[0].MWh= hidrau6[2];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Abril");
									valoresenergia6[0].MWh= hidrau6[3];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Mayo");
									valoresenergia6[0].MWh= hidrau6[4];
									printf("%s - %f MWh\t\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Junio");
									valoresenergia6[0].MWh= hidrau6[5];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Julio");
									valoresenergia6[0].MWh= hidrau6[6];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Agosto");
									valoresenergia6[0].MWh= hidrau6[7];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Septiembre");
									valoresenergia6[0].MWh= hidrau6[8];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Octubre");
									valoresenergia6[0].MWh= hidrau6[9];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Noviembre");
									valoresenergia6[0].MWh= hidrau6[10];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Diciembre");
									valoresenergia6[0].MWh= hidrau6[11];
									printf("%s - %f MWh\t\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
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
													printf("\nEl maximo de generacion hidraulica en Castilla y Leon es:\n\n");
													maximo(hidrau6);
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
													printf("\nEl minimo de generacion hidraulica en Castilla y Leon es:\n\n");
													minimo(hidrau6);
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
													prom1= promedio(hidrau6);
													printf("\nEl promedio de generacion hidraulica en Castilla y Leon es %f MWh.\n",prom1);
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
													MWhaeuro(hidrau6);
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
													MWhaGWh(hidrau6);
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
													desv1= desviacion(hidrau6);
													printf("\nLa desviación tipica de generacion hidraulica en Castilla y Leon es %.2f MWh.\n",desv1);
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
													vari1=varianza(hidrau6);
													printf("\nLa varianza de generacion hidraulica en Castilla y Leon es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion hidraulica de mayor a menor en Castilla y Leon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf6[i]=hidrau6[i];
													}
													mayoramenor(rectf6);
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
													printf("Los datos de generacion hidraulica de menor a mayor en Castilla y Leon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf6[i]=hidrau6[i];
													}
													menoramayor(rectf6);
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
													MWhaMJ(hidrau6);
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
									printf("\nNo hay datos de generacion hidroeolica en Castilla y Leon.\n");
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
									printf("\nA continuacion se muestran los datos de generacion eolica en Castilla y Leon:\n\n");
									strcpy(valoresenergia6[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia6[0].MWh= eoli6[0];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Febrero");
									valoresenergia6[0].MWh= eoli6[1];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Marzo");
									valoresenergia6[0].MWh= eoli6[2];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Abril");
									valoresenergia6[0].MWh= eoli6[3];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Mayo");
									valoresenergia6[0].MWh= eoli6[4];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Junio");
									valoresenergia6[0].MWh= eoli6[5];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Julio");
									valoresenergia6[0].MWh= eoli6[6];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Agosto");
									valoresenergia6[0].MWh= eoli6[7];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Septiembre");
									valoresenergia6[0].MWh= eoli6[8];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Octubre");
									valoresenergia6[0].MWh= eoli6[9];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Noviembre");
									valoresenergia6[0].MWh= eoli6[10];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Diciembre");
									valoresenergia6[0].MWh= eoli6[11];
									printf("%s - %f MWh\t\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
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
													printf("\nEl maximo de generacion eolica en Castilla y Leon es:\n\n");
													maximo(eoli6);
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
													printf("\nEl minimo de generacion eolica en Castilla y Leon es:\n\n");
													minimo(eoli6);
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
													prom1= promedio(eoli6);
													printf("\nEl promedio de generacion eolica en Castilla y Leon es %f MWh.\n",prom1);
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
													MWhaeuro(eoli6);
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
													MWhaGWh(eoli6);
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
													desv1= desviacion(eoli6);
													printf("\nLa desviación tipica de generacion eolica en Castilla y Leon es %.2f MWh.\n",desv1);
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
													vari1=varianza(eoli6);
													printf("\nLa varianza de generacion eolica en Castilla y Leon es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion eolica de mayor a menor en Castilla y Leon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf6[i]=eoli6[i];
													}
													mayoramenor(rectf6);
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
														rectf6[i]=eoli6[i];
													}
													menoramayor(rectf6);
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
													MWhaMJ(eoli6);
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
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Castilla y Leon:\n\n");
									strcpy(valoresenergia6[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia6[0].MWh= solar6[0];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Febrero");
									valoresenergia6[0].MWh= solar6[1];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Marzo");
									valoresenergia6[0].MWh= solar6[2];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Abril");
									valoresenergia6[0].MWh= solar6[3];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Mayo");
									valoresenergia6[0].MWh= solar6[4];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Junio");
									valoresenergia6[0].MWh= solar6[5];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Julio");
									valoresenergia6[0].MWh= solar6[6];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Agosto");
									valoresenergia6[0].MWh= solar6[7];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Septiembre");
									valoresenergia6[0].MWh= solar6[8];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Octubre");
									valoresenergia6[0].MWh= solar6[9];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Noviembre");
									valoresenergia6[0].MWh= solar6[10];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Diciembre");
									valoresenergia6[0].MWh= solar6[11];
									printf("%s - %f MWh\t\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
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
													printf("\nEl maximo de generacion solar fotovoltaica en Castilla y Leon es:\n\n");
													maximo(solar6);
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
													printf("\nEl minimo de generacion solar fotovoltaica en Castilla y Leon es:\n\n");
													minimo(solar6);
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
													prom1= promedio(solar6);
													printf("\nEl promedio de generacion solar fotovoltaica en Castilla y Leon es %f MWh.\n",prom1);
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
													MWhaeuro(solar6);
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
													MWhaGWh(solar6);
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
													desv1= desviacion(solar6);
													printf("\nLa desviación tipica de generacion solar fotovoltaica en Castilla y Leon es %.2f MWh.\n",desv1);
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
													vari1=varianza(solar6);
													printf("\nLa varianza de generacion solar fotovoltaica en Castilla y Leon es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Castilla y Leon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf6[i]=solar6[i];
													}
													mayoramenor(rectf6);
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
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Castilla y Leon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf6[i]=solar6[i];
													}
													menoramayor(rectf6);
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
													MWhaMJ(solar6);
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
									printf("\nA continuacion se muestran los datos de generacion solar termica en Castilla y Leon:\n\n");
									strcpy(valoresenergia6[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia6[0].MWh= termica6[0];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Febrero");
									valoresenergia6[0].MWh= termica6[1];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Marzo");
									valoresenergia6[0].MWh= termica6[2];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Abril");
									valoresenergia6[0].MWh= termica6[3];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Mayo");
									valoresenergia6[0].MWh= termica6[4];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Junio");
									valoresenergia[0].MWh= termica[5];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Julio");
									valoresenergia6[0].MWh= termica6[6];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Agosto");
									valoresenergia6[0].MWh= termica6[7];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Septiembre");
									valoresenergia6[0].MWh= termica6[8];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Octubre");
									valoresenergia6[0].MWh= termica6[9];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Noviembre");
									valoresenergia6[0].MWh= termica6[10];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Diciembre");
									valoresenergia6[0].MWh= termica6[11];
									printf("%s - %f MWh\t\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
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
													printf("\nEl maximo de generacion solar termica en Castilla y Leon es:\n\n");
													maximo(termica6);
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
													printf("\nEl minimo de generacion solar termica en Castilla y Leon es:\n\n");
													minimo(termica6);
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
													prom1= promedio(termica6);
													printf("\nEl promedio de generacion solar termica en Castilla y Leon es %f MWh.\n",prom1);
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
													MWhaeuro(termica6);
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
													MWhaGWh(termica6);
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
													desv1= desviacion(termica6);
													printf("\nLa desviación tipica de generacion solar termica en Castilla y Leon es %.2f MWh.\n",desv1);
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
													vari1=varianza(termica6);
													printf("\nLa varianza de generacion solar termica en Castilla y Leones %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion solar termica de mayor a menor en Castilla y Leonson:\n\n");
													for(i=0;i<12;i++)
													{
														rectf6[i]=termica6[i];
													}
													mayoramenor(rectf6);
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
													printf("Los datos de generacion solar termica de menor a mayor en Castilla y Leon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf6[i]=termica6[i];
													}
													menoramayor(rectf6);
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
													MWhaMJ(termica6);
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
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Castilla y Leon:\n\n");
									strcpy(valoresenergia6[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia6[0].MWh= otras6[0];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Febrero");
									valoresenergia6[0].MWh= otras6[1];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Marzo");
									valoresenergia6[0].MWh= otras6[2];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Abril");
									valoresenergia6[0].MWh= otras6[3];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Mayo");
									valoresenergia6[0].MWh= otras6[4];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Junio");
									valoresenergia6[0].MWh= otras6[5];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Julio");
									valoresenergia6[0].MWh= otras6[6];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Agosto");
									valoresenergia6[0].MWh= otras6[7];
									printf("%s - %f MWh\t\n\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Septiembre");
									valoresenergia6[0].MWh= otras6[8];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Octubre");
									valoresenergia6[0].MWh= otras6[9];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Noviembre");
									valoresenergia6[0].MWh= otras6[10];
									printf("%s - %f MWh\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
									strcpy(valoresenergia6[0].mes, "Diciembre");
									valoresenergia6[0].MWh= otras6[11];
									printf("%s - %f MWh\t\n",valoresenergia6[0].mes,valoresenergia6[0].MWh);
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
													printf("\nEl maximo de generacion de otras renovables en Castilla y Leon es:\n\n");
													maximo(otras6);
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
													printf("\nEl minimo de generacion de otras renovables en Castilla y Leon es:\n\n");
													minimo(otras6);
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
													prom1= promedio(otras6);
													printf("\nEl promedio de generacion de otras renovables en Castilla y Leon es %f MWh.\n",prom1);
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
													MWhaeuro(otras6);
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
													MWhaGWh(otras6);
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
													desv1= desviacion(otras6);
													printf("\nLa desviación tipica de generacion de otras renovables en Castilla y Leones %.2f MWh.\n",desv1);
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
													vari1=varianza(otras6);
													printf("\nLa varianza de generacion de otras renovables en Castilla y Leon es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de otras renovables de mayor a menor en Castilla y Leon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf6[i]=otras6[i];
													}
													mayoramenor(rectf6);
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
													printf("Los datos de generacion de otras renovables de menor a mayor en Castilla y Leon son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf6[i]=otras6[i];
													}
													menoramayor(rectf6);
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
													MWhaMJ(otras6);
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
									printf("\nNo hay datos de generacion de residuos renovables en Castilla y Leon.\n");
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
				}while(comunidad==6);//La condición es solo para el caso 6
			break;
		}
		case 7: // Catalunya
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Catalunya:\n\n");
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
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Catalunya:\n\n");
									strcpy(valoresenergia7[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia7[0].MWh= hidrau7[0];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Febrero");
									valoresenergia7[0].MWh= hidrau7[1];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Marzo");
									valoresenergia7[0].MWh= hidrau7[2];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Abril");
									valoresenergia7[0].MWh= hidrau7[3];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Mayo");
									valoresenergia7[0].MWh= hidrau7[4];
									printf("%s - %f MWh\t\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Junio");
									valoresenergia7[0].MWh= hidrau7[5];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Julio");
									valoresenergia7[0].MWh= hidrau7[6];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Agosto");
									valoresenergia7[0].MWh= hidrau7[7];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Septiembre");
									valoresenergia7[0].MWh= hidrau7[8];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Octubre");
									valoresenergia7[0].MWh= hidrau7[9];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Noviembre");
									valoresenergia7[0].MWh= hidrau7[10];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Diciembre");
									valoresenergia7[0].MWh= hidrau7[11];
									printf("%s - %f MWh\t\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
													printf("\nEl maximo de generacion hidraulica en Catalunya es:\n\n");
													maximo(hidrau7);
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
													printf("\nEl minimo de generacion hidraulica en Catalunya es:\n\n");
													minimo(hidrau7);
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
													prom1= promedio(hidrau7);
													printf("\nEl promedio de generacion hidraulica en Catalunya es %f MWh.\n",prom1);
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
													MWhaeuro(hidrau7);
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
													MWhaGWh(hidrau7);
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
													desv1= desviacion(hidrau7);
													printf("\nLa desviación tipica de generacion hidraulica en Catalunya es %.2f MWh.\n",desv1);
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
													vari1=varianza(hidrau7);
													printf("\nLa varianza de generacion hidraulica en Catalunya es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion hidraulica de mayor a menor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=hidrau7[i];
													}
													mayoramenor(rectf7);
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
													printf("Los datos de generacion hidraulica de menor a mayor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=hidrau7[i];
													}
													menoramayor(rectf7);
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
													MWhaMJ(hidrau7);
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
									printf("\nNo hay datos de generacion hidroeolica en Catalunya.\n");
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
									printf("\nA continuacion se muestran los datos de generacion eolica en Catalunya:\n\n");
									strcpy(valoresenergia7[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia7[0].MWh= eoli7[0];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Febrero");
									valoresenergia7[0].MWh= eoli7[1];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Marzo");
									valoresenergia7[0].MWh= eoli7[2];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Abril");
									valoresenergia7[0].MWh= eoli7[3];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Mayo");
									valoresenergia7[0].MWh= eoli7[4];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Junio");
									valoresenergia7[0].MWh= eoli7[5];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Julio");
									valoresenergia7[0].MWh= eoli7[6];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia6[0].mes, "Agosto");
									valoresenergia7[0].MWh= eoli7[7];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Septiembre");
									valoresenergia7[0].MWh= eoli7[8];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Octubre");
									valoresenergia7[0].MWh= eoli7[9];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Noviembre");
									valoresenergia7[0].MWh= eoli7[10];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Diciembre");
									valoresenergia7[0].MWh= eoli7[11];
									printf("%s - %f MWh\t\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
													printf("\nEl maximo de generacion eolica en Catalunya es:\n\n");
													maximo(eoli7);
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
													printf("\nEl minimo de generacion eolica en Catalunya es:\n\n");
													minimo(eoli7);
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
													prom1= promedio(eoli7);
													printf("\nEl promedio de generacion eolica en Catalunya es %f MWh.\n",prom1);
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
													MWhaeuro(eoli7);
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
													MWhaGWh(eoli7);
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
													desv1= desviacion(eoli7);
													printf("\nLa desviación tipica de generacion eolica en Catalunya es %.2f MWh.\n",desv1);
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
													vari1=varianza(eoli7);
													printf("\nLa varianza de generacion eolica en Catalunya es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion eolica de mayor a menor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=eoli7[i];
													}
													mayoramenor(rectf7);
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
													printf("Los datos de generacion eolica de menor a mayor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=eoli7[i];
													}
													menoramayor(rectf7);
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
													MWhaMJ(eoli7);
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
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Catalunya:\n\n");
									strcpy(valoresenergia7[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia7[0].MWh= solar7[0];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Febrero");
									valoresenergia7[0].MWh= solar7[1];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Marzo");
									valoresenergia7[0].MWh= solar7[2];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Abril");
									valoresenergia7[0].MWh= solar7[3];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Mayo");
									valoresenergia7[0].MWh= solar7[4];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Junio");
									valoresenergia7[0].MWh= solar7[5];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Julio");
									valoresenergia7[0].MWh= solar7[6];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Agosto");
									valoresenergia7[0].MWh= solar7[7];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Septiembre");
									valoresenergia7[0].MWh= solar7[8];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Octubre");
									valoresenergia7[0].MWh= solar7[9];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Noviembre");
									valoresenergia7[0].MWh= solar7[10];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Diciembre");
									valoresenergia7[0].MWh= solar7[11];
									printf("%s - %f MWh\t\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
													printf("\nEl maximo de generacion solar fotovoltaica en Catalunya es:\n\n");
													maximo(solar7);
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
													printf("\nEl minimo de generacion solar fotovoltaica en Catalunya es:\n\n");
													minimo(solar7);
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
													prom1= promedio(solar7);
													printf("\nEl promedio de generacion solar fotovoltaica en Catalunya es %f MWh.\n",prom1);
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
													MWhaeuro(solar7);
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
													MWhaGWh(solar7);
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
													desv1= desviacion(solar7);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Catalunya es %.2f MWh.\n",desv1);
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
													vari1=varianza(solar7);
													printf("\nLa varianza de generacion solar fotovoltaica en Catalunya es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=solar7[i];
													}
													mayoramenor(rectf7);
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
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=solar7[i];
													}
													menoramayor(rectf7);
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
													MWhaMJ(solar7);
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
									printf("\nA continuacion se muestran los datos de generacion solar termica en Catalunya:\n\n");
									strcpy(valoresenergia7[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia7[0].MWh= termica7[0];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Febrero");
									valoresenergia7[0].MWh= termica7[1];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Marzo");
									valoresenergia7[0].MWh= termica7[2];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Abril");
									valoresenergia7[0].MWh= termica7[3];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Mayo");
									valoresenergia7[0].MWh= termica7[4];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Junio");
									valoresenergia7[0].MWh= termica7[5];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Julio");
									valoresenergia7[0].MWh= termica7[6];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Agosto");
									valoresenergia7[0].MWh= termica7[7];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Septiembre");
									valoresenergia7[0].MWh= termica7[8];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Octubre");
									valoresenergia7[0].MWh= termica7[9];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Noviembre");
									valoresenergia7[0].MWh= termica7[10];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Diciembre");
									valoresenergia7[0].MWh= termica7[11];
									printf("%s - %f MWh\t\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
													printf("\nEl maximo de generacion solar termica en Catalunya es:\n\n");
													maximo(termica7);
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
													printf("\nEl minimo de generacion solar termica en Catalunya es:\n\n");
													minimo(termica7);
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
													prom1= promedio(termica7);
													printf("\nEl promedio de generacion solar termica en Catalunya es %f MWh.\n",prom1);
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
													MWhaeuro(termica7);
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
													MWhaGWh(termica7);
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
													desv1= desviacion(termica7);
													printf("\nLa desviación tipica de generacion solar termica en Catalunya es %.2f MWh.\n",desv1);
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
													vari1=varianza(termica7);
													printf("\nLa varianza de generacion solar termica en Catalunya es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion solar termica de mayor a menor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=termica7[i];
													}
													mayoramenor(rectf7);
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
													printf("Los datos de generacion solar termica de menor a mayor en Catalunyason:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=termica7[i];
													}
													menoramayor(rectf7);
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
													MWhaMJ(termica7);
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
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Catalunya:\n\n");
									strcpy(valoresenergia7[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia7[0].MWh= otras7[0];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Febrero");
									valoresenergia7[0].MWh= otras7[1];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Marzo");
									valoresenergia7[0].MWh= otras7[2];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Abril");
									valoresenergia7[0].MWh= otras7[3];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Mayo");
									valoresenergia7[0].MWh= otras7[4];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Junio");
									valoresenergia7[0].MWh= otras7[5];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Julio");
									valoresenergia7[0].MWh= otras7[6];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Agosto");
									valoresenergia7[0].MWh= otras7[7];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Septiembre");
									valoresenergia7[0].MWh= otras7[8];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Octubre");
									valoresenergia7[0].MWh= otras7[9];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Noviembre");
									valoresenergia7[0].MWh= otras7[10];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Diciembre");
									valoresenergia7[0].MWh= otras7[11];
									printf("%s - %f MWh\t\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
													printf("\nEl maximo de generacion de otras renovables en Catalunya es:\n\n");
													maximo(otras7);
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
													printf("\nEl minimo de generacion de otras renovables en Catalunya es:\n\n");
													minimo(otras7);
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
													prom1= promedio(otras7);
													printf("\nEl promedio de generacion de otras renovables en Catalunya es %f MWh.\n",prom1);
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
													MWhaeuro(otras7);
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
													MWhaGWh(otras7);
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
													desv1= desviacion(otras7);
													printf("\nLa desviación tipica de generacion de otras renovables en Catalunya es %.2f MWh.\n",desv1);
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
													vari1=varianza(otras7);
													printf("\nLa varianza de generacion de otras renovables en Catalunya es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de otras renovables de mayor a menor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=otras7[i];
													}
													mayoramenor(rectf7);
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
													printf("Los datos de generacion de otras renovables de menor a mayor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=otras7[i];
													}
													menoramayor(rectf7);
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
													MWhaMJ(otras7);
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
									printf("\nA continuacion se muestran los datos de generacion de residuos renovables en Catalunya:\n\n");
									strcpy(valoresenergia7[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia7[0].MWh= resid7[0];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Febrero");
									valoresenergia7[0].MWh= resid7[1];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Marzo");
									valoresenergia7[0].MWh= resid7[2];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Abril");
									valoresenergia7[0].MWh= resid7[3];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Mayo");
									valoresenergia7[0].MWh= resid7[4];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Junio");
									valoresenergia7[0].MWh= resid7[5];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Julio");
									valoresenergia7[0].MWh= resid7[6];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Agosto");
									valoresenergia7[0].MWh= resid7[7];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Septiembre");
									valoresenergia7[0].MWh= resid7[8];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Octubre");
									valoresenergia7[0].MWh= resid7[9];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Noviembre");
									valoresenergia7[0].MWh= resid7[10];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Diciembre");
									valoresenergia7[0].MWh= resid7[11];
									printf("%s - %f MWh\t\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
													printf("\nEl maximo de generacion de residuos renovables en Catalunya es:\n\n");
													maximo(resid7);
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
													printf("\nEl minimo de generacion de residuos renovables en Catalunya es:\n\n");
													minimo(resid7);
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
													prom1= promedio(resid7);
													printf("\nEl promedio de generacion de residuos renovables en Catalunya es %f MWh.\n",prom1);
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
													MWhaeuro(resid7);
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
													MWhaGWh(resid7);
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
													desv1= desviacion(resid7);
													printf("\nLa desviación tipica de generacion de residuos renovables en Catalunya es %.2f MWh.\n",desv1);
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
													vari1=varianza(resid7);
													printf("\nLa varianza de generacion de residuos renovables en Catalunya es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de residuos renovables de mayor a menor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=resid7[i];
													}
													mayoramenor(rectf7);
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
													printf("Los datos de generacion de residuos renovables de menor a mayor en Catalunya son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf7[i]=resid7[i];
													}
													menoramayor(rectf7);
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
													MWhaMJ(resid7);
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
				}while(comunidad==7);//La condición es solo para el caso 7
			break;
		}
		
		case 8: // Ceuta
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nNo se dispone de datos sobre energias renvobales de Ceuta.\n\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf("   %i",&atras);
					if(atras==0)//Para volver hacia atrás
					{
						system("cls");
						break;
					}
				}while(comunidad==8);//La condición es solo para el caso 8
			break;
		}
		case 9: // Comunidad de Madrid
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de la Comunidad de Madrid:\n\n");
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
									printf("\nA continuacion se muestran los datos de generacion hidraulica en la Comunidad de Madrid:\n\n");
									strcpy(valoresenergia9[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia9[0].MWh= hidrau9[0];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Febrero");
									valoresenergia9[0].MWh= hidrau9[1];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Marzo");
									valoresenergia9[0].MWh= hidrau9[2];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Abril");
									valoresenergia9[0].MWh= hidrau9[3];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Mayo");
									valoresenergia9[0].MWh= hidrau9[4];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Junio");
									valoresenergia9[0].MWh= hidrau9[5];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Julio");
									valoresenergia9[0].MWh= hidrau9[6];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Agosto");
									valoresenergia9[0].MWh= hidrau9[7];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Septiembre");
									valoresenergia9[0].MWh= hidrau9[8];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Octubre");
									valoresenergia9[0].MWh= hidrau9[9];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Noviembre");
									valoresenergia9[0].MWh= hidrau9[10];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Diciembre");
									valoresenergia9[0].MWh= hidrau9[11];
									printf("%s - %f MWh\t\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
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
													printf("\nEl maximo de generacion hidraulica en la Comunidad de Madrid es:\n\n");
													maximo(hidrau9);
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
													printf("\nEl minimo de generacion hidraulica en la Comunidad de Madrid es:\n\n");
													minimo(hidrau9);
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
													prom1= promedio(hidrau9);
													printf("\nEl promedio de generacion hidraulica en la Comunidad de Madrid es %f MWh.\n",prom1);
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
													MWhaeuro(hidrau9);
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
													MWhaGWh(hidrau9);
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
													desv1= desviacion(hidrau9);
													printf("\nLa desviación tipica de generacion hidraulica en la Comunidad de Madrid es %.2f MWh.\n",desv1);
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
													vari1=varianza(hidrau9);
													printf("\nLa varianza de generacion hidraulica en la Comunidad de Madrid es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion hidraulica de mayor a menor en la Comunidad de Madrid son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=hidrau9[i];
													}
													mayoramenor(rectf9);
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
													printf("Los datos de generacion hidraulica de menor a mayor en la Comunidad de Madrid son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=hidrau9[i];
													}
													menoramayor(rectf9);
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
													MWhaMJ(hidrau9);
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
									printf("\nNo hay datos de generacion hidroeolica en la Comunidad de Madrid.\n");
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
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion eolica en la Comunidad de Madrid.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==3);//La condición es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en la Comunidad de Madrid:\n\n");
									strcpy(valoresenergia9[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia9[0].MWh= solar9[0];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Febrero");
									valoresenergia9[0].MWh= solar9[1];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Marzo");
									valoresenergia9[0].MWh= solar9[2];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Abril");
									valoresenergia9[0].MWh= solar9[3];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Mayo");
									valoresenergia9[0].MWh= solar9[4];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Junio");
									valoresenergia9[0].MWh= solar9[5];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Julio");
									valoresenergia9[0].MWh= solar9[6];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Agosto");
									valoresenergia9[0].MWh= solar9[7];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Septiembre");
									valoresenergia9[0].MWh= solar9[8];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Octubre");
									valoresenergia9[0].MWh= solar9[9];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Noviembre");
									valoresenergia9[0].MWh= solar9[10];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Diciembre");
									valoresenergia9[0].MWh= solar9[11];
									printf("%s - %f MWh\t\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
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
													printf("\nEl maximo de generacion solar fotovoltaica en la Comunidad de Madrid es:\n\n");
													maximo(solar9);
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
													printf("\nEl minimo de generacion solar fotovoltaica en la Comunidad de Madrides:\n\n");
													minimo(solar9);
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
													prom1= promedio(solar9);
													printf("\nEl promedio de generacion solar fotovoltaica en la Comunidad de Madrid es %f MWh.\n",prom1);
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
													MWhaeuro(solar9);
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
													MWhaGWh(solar9);
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
													desv1= desviacion(solar9);
													printf("\nLa desviación tipica de generacion solar fotovoltaica en la Comunidad de Madrid es %.2f MWh.\n",desv1);
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
													vari1=varianza(solar9);
													printf("\nLa varianza de generacion solar fotovoltaica en la Comunidad de Madrid es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en la Comunidad de Madrid son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=solar9[i];
													}
													mayoramenor(rectf9);
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
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en la Comunidad de Madrid son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=solar9[i];
													}
													menoramayor(rectf9);
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
													MWhaMJ(solar9);
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
									printf("\nNo hay datos de generacion solar termica en la Comunidad de Madrid.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atrás
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
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en la Comunidad de Madrid:\n\n");
									strcpy(valoresenergia9[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia9[0].MWh= otras9[0];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Febrero");
									valoresenergia9[0].MWh= otras9[1];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Marzo");
									valoresenergia9[0].MWh= otras9[2];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Abril");
									valoresenergia9[0].MWh= otras9[3];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Mayo");
									valoresenergia9[0].MWh= otras9[4];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Junio");
									valoresenergia9[0].MWh= otras9[5];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Julio");
									valoresenergia9[0].MWh= otras9[6];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Agosto");
									valoresenergia9[0].MWh= otras9[7];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Septiembre");
									valoresenergia9[0].MWh= otras9[8];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Octubre");
									valoresenergia9[0].MWh= otras9[9];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Noviembre");
									valoresenergia9[0].MWh= otras9[10];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Diciembre");
									valoresenergia9[0].MWh= otras9[11];
									printf("%s - %f MWh\t\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
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
													printf("\nEl maximo de generacion de otras renovables en la Comunidad de Madrid es:\n\n");
													maximo(otras9);
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
													printf("\nEl minimo de generacion de otras renovables en la Comunidad de Madrid  es:\n\n");
													minimo(otras9);
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
													prom1= promedio(otras9);
													printf("\nEl promedio de generacion de otras renovables en la Comunidad de Madrid  es %f MWh.\n",prom1);
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
													MWhaeuro(otras9);
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
													MWhaGWh(otras9);
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
													desv1= desviacion(otras9);
													printf("\nLa desviación tipica de generacion de otras renovables en la Comunidad de Madrid  es %.2f MWh.\n",desv1);
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
													vari1=varianza(otras9);
													printf("\nLa varianza de generacion de otras renovables en la Comunidad de Madrid  es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de otras renovables de mayor a menor en la Comunidad de Madrid  son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=otras9[i];
													}
													mayoramenor(rectf9);
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
													printf("Los datos de generacion de otras renovables de menor a mayor en la Comunidad de Madrid  son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=otras9[i];
													}
													menoramayor(rectf9);
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
													MWhaMJ(otras9);
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
									printf("\nA continuacion se muestran los datos de generacion de residuos renovables en la Comunidad de Madrid :\n\n");
									strcpy(valoresenergia9[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia9[0].MWh= resid9[0];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Febrero");
									valoresenergia9[0].MWh= resid9[1];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Marzo");
									valoresenergia9[0].MWh= resid9[2];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Abril");
									valoresenergia9[0].MWh= resid9[3];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Mayo");
									valoresenergia9[0].MWh= resid9[4];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Junio");
									valoresenergia9[0].MWh= resid9[5];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Julio");
									valoresenergia9[0].MWh= resid9[6];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Agosto");
									valoresenergia9[0].MWh= resid9[7];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Septiembre");
									valoresenergia9[0].MWh= resid9[8];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Octubre");
									valoresenergia9[0].MWh= resid9[9];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Noviembre");
									valoresenergia9[0].MWh= resid9[10];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Diciembre");
									valoresenergia9[0].MWh= resid9[11];
									printf("%s - %f MWh\t\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
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
													printf("\nEl maximo de generacion de residuos renovables en la Comunidad de Madrid  es:\n\n");
													maximo(resid9);
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
													printf("\nEl minimo de generacion de residuos renovables en la Comunidad de Madrid  es:\n\n");
													minimo(resid9);
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
													prom1= promedio(resid9);
													printf("\nEl promedio de generacion de residuos renovables en la Comunidad de Madrid  es %f MWh.\n",prom1);
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
													MWhaeuro(resid9);
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
													MWhaGWh(resid9);
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
													desv1= desviacion(resid9);
													printf("\nLa desviación tipica de generacion de residuos renovables en la Comunidad de Madrid  es %.2f MWh.\n",desv1);
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
													vari1=varianza(resid9);
													printf("\nLa varianza de generacion de residuos renovables en la Comunidad de Madrid a es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de residuos renovables de mayor a menor en la Comunidad de Madrid  son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=resid9[i];
													}
													mayoramenor(rectf9);
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
													printf("Los datos de generacion de residuos renovables de menor a mayor en la Comunidad de Madrid  son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=resid9[i];
													}
													menoramayor(rectf9);
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
													MWhaMJ(resid9);
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
				}while(comunidad==9);//La condición es solo para el caso 9
			break;
		}
		case 10://Valencia
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Valencia:\n\n");
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
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Valencia:\n\n");
									strcpy(valoresenergia10[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia10[0].MWh= hidrau10[0];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Febrero");
									valoresenergia10[0].MWh= hidrau10[1];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Marzo");
									valoresenergia10[0].MWh= hidrau10[2];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Abril");
									valoresenergia10[0].MWh= hidrau10[3];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Mayo");
									valoresenergia10[0].MWh= hidrau10[4];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Junio");
									valoresenergia10[0].MWh= hidrau10[5];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Julio");
									valoresenergia10[0].MWh= hidrau10[6];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Agosto");
									valoresenergia10[0].MWh= hidrau10[7];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Septiembre");
									valoresenergia10[0].MWh= hidrau10[8];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Octubre");
									valoresenergia10[0].MWh= hidrau10[9];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Noviembre");
									valoresenergia10[0].MWh= hidrau10[10];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Diciembre");
									valoresenergia10[0].MWh= hidrau10[11];
									printf("%s - %f MWh\t\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
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
													printf("\nEl maximo de generacion hidraulica en Valencia es:\n\n");
													maximo(hidrau10);
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
													printf("\nEl minimo de generacion hidraulica en Valencia es:\n\n");
													minimo(hidrau10);
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
													prom1= promedio(hidrau10);
													printf("\nEl promedio de generacion hidraulica en Valencia es %f MWh.\n",prom1);
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
													MWhaeuro(hidrau10);
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
													MWhaGWh(hidrau10);
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
													desv1= desviacion(hidrau10);
													printf("\nLa desviación tipica de generacion hidraulica en Valencia es %.2f MWh.\n",desv1);
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
													vari1=varianza(hidrau10);
													printf("\nLa varianza de generacion hidraulica en Valencia es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion hidraulica de mayor a menor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=hidrau10[i];
													}
													mayoramenor(rectf10);
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
													printf("Los datos de generacion hidraulica de menor a mayor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=hidrau10[i];
													}
													menoramayor(rectf10);
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
													MWhaMJ(hidrau10);
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
									printf("\nNo hay datos de generacion hidroeolica en Valencia.\n");
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
									printf("\nA continuacion se muestran los datos de generacion eolica en Valencia:\n\n");
									strcpy(valoresenergia10[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia10[0].MWh= eoli10[0];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Febrero");
									valoresenergia10[0].MWh= eoli10[1];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Marzo");
									valoresenergia10[0].MWh= eoli10[2];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Abril");
									valoresenergia10[0].MWh= eoli10[3];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Mayo");
									valoresenergia10[0].MWh= eoli10[4];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Junio");
									valoresenergia10[0].MWh= eoli10[5];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Julio");
									valoresenergia10[0].MWh= eoli10[6];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Agosto");
									valoresenergia10[0].MWh= eoli10[7];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Septiembre");
									valoresenergia10[0].MWh= eoli10[8];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Octubre");
									valoresenergia10[0].MWh= eoli10[9];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Noviembre");
									valoresenergia10[0].MWh= eoli10[10];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Diciembre");
									valoresenergia10[0].MWh= eoli10[11];
									printf("%s - %f MWh\t\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
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
													printf("\nEl maximo de generacion eolica en Valencia es:\n\n");
													maximo(eoli10);
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
													printf("\nEl minimo de generacion eolica en Valencia es:\n\n");
													minimo(eoli10);
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
													prom1= promedio(eoli10);
													printf("\nEl promedio de generacion eolica en Valencia es %f MWh.\n",prom1);
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
													MWhaeuro(eoli10);
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
													MWhaGWh(eoli10);
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
													desv1= desviacion(eoli10);
													printf("\nLa desviación tipica de generacion eolica en Valencia es %.2f MWh.\n",desv1);
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
													vari1=varianza(eoli10);
													printf("\nLa varianza de generacion eolica en Valencia es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion eolica de mayor a menor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=eoli10[i];
													}
													mayoramenor(rectf10);
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
													printf("Los datos de generacion eolica de menor a mayor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=eoli10[i];
													}
													menoramayor(rectf10);
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
													MWhaMJ(eoli10);
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
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Valencia:\n\n");
									strcpy(valoresenergia10[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia10[0].MWh= solar10[0];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Febrero");
									valoresenergia10[0].MWh= solar10[1];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Marzo");
									valoresenergia10[0].MWh= solar10[2];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Abril");
									valoresenergia10[0].MWh= solar10[3];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Mayo");
									valoresenergia10[0].MWh= solar10[4];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Junio");
									valoresenergia10[0].MWh= solar10[5];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Julio");
									valoresenergia10[0].MWh= solar10[6];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Agosto");
									valoresenergia10[0].MWh= solar10[7];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Septiembre");
									valoresenergia10[0].MWh= solar10[8];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Octubre");
									valoresenergia10[0].MWh= solar10[9];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Noviembre");
									valoresenergia10[0].MWh= solar10[10];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Diciembre");
									valoresenergia10[0].MWh= solar10[11];
									printf("%s - %f MWh\t\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
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
													printf("\nEl maximo de generacion solar fotovoltaica en Valencia es:\n\n");
													maximo(solar10);
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
													printf("\nEl minimo de generacion solar fotovoltaica en Valencia es:\n\n");
													minimo(solar10);
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
													prom1= promedio(solar10);
													printf("\nEl promedio de generacion solar fotovoltaica en Valencia es %f MWh.\n",prom1);
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
													MWhaeuro(solar10);
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
													MWhaGWh(solar10);
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
													desv1= desviacion(solar10);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Valencia es %.2f MWh.\n",desv1);
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
													vari1=varianza(solar10);
													printf("\nLa varianza de generacion solar fotovoltaica en Valencia es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=solar10[i];
													}
													mayoramenor(rectf10);
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
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=solar10[i];
													}
													menoramayor(rectf10);
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
													MWhaMJ(solar10);
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
									printf("\nA continuacion se muestran los datos de generacion solar termica en Valencia:\n\n");
									strcpy(valoresenergia10[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia10[0].MWh= termica10[0];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Febrero");
									valoresenergia10[0].MWh= termica10[1];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Marzo");
									valoresenergia10[0].MWh= termica10[2];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Abril");
									valoresenergia10[0].MWh= termica10[3];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Mayo");
									valoresenergia10[0].MWh= termica10[4];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Junio");
									valoresenergia10[0].MWh= termica10[5];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Julio");
									valoresenergia10[0].MWh= termica10[6];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Agosto");
									valoresenergia10[0].MWh= termica10[7];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Septiembre");
									valoresenergia10[0].MWh= termica10[8];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Octubre");
									valoresenergia10[0].MWh= termica10[9];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Noviembre");
									valoresenergia10[0].MWh= termica10[10];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Diciembre");
									valoresenergia10[0].MWh= termica10[11];
									printf("%s - %f MWh\t\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
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
													printf("\nEl maximo de generacion solar termica en Valencia es:\n\n");
													maximo(termica10);
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
													printf("\nEl minimo de generacion solar termica en Valencia es:\n\n");
													minimo(termica10);
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
													prom1= promedio(termica10);
													printf("\nEl promedio de generacion solar termica en Valencia es %f MWh.\n",prom1);
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
													MWhaeuro(termica10);
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
													MWhaGWh(termica10);
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
													desv1= desviacion(termica10);
													printf("\nLa desviación tipica de generacion solar termica en Valencia es %.2f MWh.\n",desv1);
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
													vari1=varianza(termica10);
													printf("\nLa varianza de generacion solar termica en Valencia es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion solar termica de mayor a menor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=termica10[i];
													}
													mayoramenor(rectf10);
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
													printf("Los datos de generacion solar termica de menor a mayor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=termica10[i];
													}
													menoramayor(rectf10);
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
													MWhaMJ(termica10);
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
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Valencia:\n\n");
									strcpy(valoresenergia10[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia10[0].MWh= otras10[0];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Febrero");
									valoresenergia10[0].MWh= otras10[1];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Marzo");
									valoresenergia10[0].MWh= otras10[2];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Abril");
									valoresenergia10[0].MWh= otras10[3];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Mayo");
									valoresenergia10[0].MWh= otras10[4];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Junio");
									valoresenergia10[0].MWh= otras10[5];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Julio");
									valoresenergia10[0].MWh= otras10[6];
									printf("%s - %f MWh\t\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Agosto");
									valoresenergia10[0].MWh= otras10[7];
									printf("%s - %f MWh\t\n\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Septiembre");
									valoresenergia10[0].MWh= otras10[8];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Octubre");
									valoresenergia10[0].MWh= otras10[9];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Noviembre");
									valoresenergia10[0].MWh= otras10[10];
									printf("%s - %f MWh\t",valoresenergia10[0].mes,valoresenergia10[0].MWh);
									strcpy(valoresenergia10[0].mes, "Diciembre");
									valoresenergia10[0].MWh= otras10[11];
									printf("%s - %f MWh\t\n",valoresenergia10[0].mes,valoresenergia10[0].MWh);
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
													printf("\nEl maximo de generacion de otras renovables en Valencia es:\n\n");
													maximo(otras10);
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
													printf("\nEl minimo de generacion de otras renovables en Valencia es:\n\n");
													minimo(otras10);
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
													prom1= promedio(otras10);
													printf("\nEl promedio de generacion de otras renovables en Valencia es %f MWh.\n",prom1);
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
													MWhaeuro(otras10);
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
													MWhaGWh(otras10);
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
													desv1= desviacion(otras10);
													printf("\nLa desviación tipica de generacion de otras renovables en Valencia es %.2f MWh.\n",desv1);
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
													vari1=varianza(otras10);
													printf("\nLa varianza de generacion de otras renovables en Valencia es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de otras renovables de mayor a menor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=otras10[i];
													}
													mayoramenor(rectf10);
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
													printf("Los datos de generacion de otras renovables de menor a mayor en Valencia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf10[i]=otras10[i];
													}
													menoramayor(rectf10);
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
													MWhaMJ(otras10);
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
									printf("\nNo hay datos de generacion de residuos renovables en Valencia.\n");
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
				}while(comunidad==10);//La condición es solo para el caso 3
			break;
			}	
		case 11://Extremadura
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Extremadura:\n\n");
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
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Extremadura:\n\n");
									strcpy(valoresenergia11[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia11[0].MWh= hidrau11[0];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Febrero");
									valoresenergia11[0].MWh= hidrau11[1];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Marzo");
									valoresenergia11[0].MWh= hidrau11[2];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Abril");
									valoresenergia11[0].MWh= hidrau11[3];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Mayo");
									valoresenergia11[0].MWh= hidrau11[4];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Junio");
									valoresenergia11[0].MWh= hidrau11[5];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Julio");
									valoresenergia11[0].MWh= hidrau11[6];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Agosto");
									valoresenergia11[0].MWh= hidrau11[7];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Septiembre");
									valoresenergia11[0].MWh= hidrau11[8];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Octubre");
									valoresenergia11[0].MWh= hidrau11[9];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Noviembre");
									valoresenergia11[0].MWh= hidrau11[10];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Diciembre");
									valoresenergia11[0].MWh= hidrau11[11];
									printf("%s - %f MWh\t\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
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
													printf("\nEl maximo de generacion hidraulica en Extremadura es:\n\n");
													maximo(hidrau11);
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
													printf("\nEl minimo de generacion hidraulica en Extremadura es:\n\n");
													minimo(hidrau11);
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
													prom1= promedio(hidrau11);
													printf("\nEl promedio de generacion hidraulica en Extremadura es %f MWh.\n",prom1);
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
													MWhaeuro(hidrau11);
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
													MWhaGWh(hidrau11);
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
													desv1= desviacion(hidrau11);
													printf("\nLa desviación tipica de generacion hidraulica en Extremadura es %.2f MWh.\n",desv1);
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
													vari1=varianza(hidrau11);
													printf("\nLa varianza de generacion hidraulica en Extremadura es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion hidraulica de mayor a menor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=hidrau11[i];
													}
													mayoramenor(rectf11);
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
													printf("Los datos de generacion hidraulica de menor a mayor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=hidrau11[i];
													}
													menoramayor(rectf11);
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
													MWhaMJ(hidrau11);
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
									printf("\nNo hay datos de generacion hidroeolica en Extremadura.\n");
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
									printf("\nA continuacion se muestran los datos de generacion eolica en Extremadura:\n\n");
									strcpy(valoresenergia11[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia11[0].MWh= eoli11[0];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Febrero");
									valoresenergia11[0].MWh= eoli11[1];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Marzo");
									valoresenergia11[0].MWh= eoli11[2];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Abril");
									valoresenergia11[0].MWh= eoli11[3];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Mayo");
									valoresenergia11[0].MWh= eoli11[4];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Junio");
									valoresenergia11[0].MWh= eoli11[5];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Julio");
									valoresenergia11[0].MWh= eoli11[6];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Agosto");
									valoresenergia11[0].MWh= eoli11[7];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Septiembre");
									valoresenergia11[0].MWh= eoli11[8];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Octubre");
									valoresenergia11[0].MWh= eoli11[9];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Noviembre");
									valoresenergia11[0].MWh= eoli11[10];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Diciembre");
									valoresenergia11[0].MWh= eoli11[11];
									printf("%s - %f MWh\t\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
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
													printf("\nEl maximo de generacion eolica en Extremadura es:\n\n");
													maximo(eoli11);
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
													printf("\nEl minimo de generacion eolica en Extremadura es:\n\n");
													minimo(eoli11);
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
													prom1= promedio(eoli11);
													printf("\nEl promedio de generacion eolica en Extremadura es %f MWh.\n",prom1);
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
													MWhaeuro(eoli11);
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
													MWhaGWh(eoli11);
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
													desv1= desviacion(eoli11);
													printf("\nLa desviación tipica de generacion eolica en Extremadura es %.2f MWh.\n",desv1);
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
													vari1=varianza(eoli11);
													printf("\nLa varianza de generacion eolica en Extremadura es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion eolica de mayor a menor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=eoli11[i];
													}
													mayoramenor(rectf11);
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
													printf("Los datos de generacion eolica de menor a mayor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=eoli11[i];
													}
													menoramayor(rectf11);
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
													MWhaMJ(eoli11);
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
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Extremadura:\n\n");
									strcpy(valoresenergia11[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia11[0].MWh= solar11[0];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Febrero");
									valoresenergia11[0].MWh= solar11[1];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Marzo");
									valoresenergia11[0].MWh= solar11[2];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Abril");
									valoresenergia11[0].MWh= solar11[3];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Mayo");
									valoresenergia11[0].MWh= solar11[4];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Junio");
									valoresenergia11[0].MWh= solar11[5];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Julio");
									valoresenergia11[0].MWh= solar11[6];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Agosto");
									valoresenergia11[0].MWh= solar11[7];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Septiembre");
									valoresenergia11[0].MWh= solar11[8];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Octubre");
									valoresenergia11[0].MWh= solar11[9];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Noviembre");
									valoresenergia11[0].MWh= solar11[10];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Diciembre");
									valoresenergia11[0].MWh= solar11[11];
									printf("%s - %f MWh\t\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
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
													printf("\nEl maximo de generacion solar fotovoltaica en Extremadura es:\n\n");
													maximo(solar11);
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
													printf("\nEl minimo de generacion solar fotovoltaica en Extremadura es:\n\n");
													minimo(solar11);
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
													prom1= promedio(solar11);
													printf("\nEl promedio de generacion solar fotovoltaica en Extremadura es %f MWh.\n",prom1);
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
													MWhaeuro(solar11);
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
													MWhaGWh(solar11);
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
													desv1= desviacion(solar11);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Extremadura es %.2f MWh.\n",desv1);
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
													vari1=varianza(solar11);
													printf("\nLa varianza de generacion solar fotovoltaica en Extremadura es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=solar11[i];
													}
													mayoramenor(rectf11);
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
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=solar11[i];
													}
													menoramayor(rectf11);
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
													MWhaMJ(solar11);
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
									printf("\nA continuacion se muestran los datos de generacion solar termica en Extremadura:\n\n");
									strcpy(valoresenergia11[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia11[0].MWh= termica11[0];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Febrero");
									valoresenergia11[0].MWh= termica11[1];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Marzo");
									valoresenergia11[0].MWh= termica11[2];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Abril");
									valoresenergia11[0].MWh= termica11[3];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Mayo");
									valoresenergia11[0].MWh= termica11[4];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Junio");
									valoresenergia11[0].MWh= termica11[5];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Julio");
									valoresenergia11[0].MWh= termica11[6];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Agosto");
									valoresenergia11[0].MWh= termica11[7];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Septiembre");
									valoresenergia11[0].MWh= termica11[8];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Octubre");
									valoresenergia11[0].MWh= termica11[9];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Noviembre");
									valoresenergia11[0].MWh= termica11[10];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Diciembre");
									valoresenergia11[0].MWh= termica11[11];
									printf("%s - %f MWh\t\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
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
													printf("\nEl maximo de generacion solar termica en Extremadura es:\n\n");
													maximo(termica11);
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
													printf("\nEl minimo de generacion solar termica en Extremadura es:\n\n");
													minimo(termica11);
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
													prom1= promedio(termica11);
													printf("\nEl promedio de generacion solar termica en Extremadura es %f MWh.\n",prom1);
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
													MWhaeuro(termica11);
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
													MWhaGWh(termica11);
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
													desv1= desviacion(termica11);
													printf("\nLa desviación tipica de generacion solar termica en Extremadura es %.2f MWh.\n",desv1);
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
													vari1=varianza(termica11);
													printf("\nLa varianza de generacion solar termica en Extremadura es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion solar termica de mayor a menor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=termica11[i];
													}
													mayoramenor(rectf11);
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
													printf("Los datos de generacion solar termica de menor a mayor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=termica11[i];
													}
													menoramayor(rectf11);
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
													MWhaMJ(termica11);
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
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Extremadura:\n\n");
									strcpy(valoresenergia11[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia11[0].MWh= otras11[0];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Febrero");
									valoresenergia11[0].MWh= otras11[1];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Marzo");
									valoresenergia11[0].MWh= otras11[2];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Abril");
									valoresenergia11[0].MWh= otras11[3];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Mayo");
									valoresenergia11[0].MWh= otras11[4];
									printf("%s - %f MWh\t\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Junio");
									valoresenergia11[0].MWh= otras11[5];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Julio");
									valoresenergia11[0].MWh= otras11[6];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Agosto");
									valoresenergia11[0].MWh= otras11[7];
									printf("%s - %f MWh\t\n\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Septiembre");
									valoresenergia11[0].MWh= otras11[8];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Octubre");
									valoresenergia11[0].MWh= otras11[9];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Noviembre");
									valoresenergia11[0].MWh= otras11[10];
									printf("%s - %f MWh\t",valoresenergia11[0].mes,valoresenergia11[0].MWh);
									strcpy(valoresenergia11[0].mes, "Diciembre");
									valoresenergia11[0].MWh= otras11[11];
									printf("%s - %f MWh\t\n",valoresenergia11[0].mes,valoresenergia11[0].MWh);
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
													printf("\nEl maximo de generacion de otras renovables en Extremadura es:\n\n");
													maximo(otras11);
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
													printf("\nEl minimo de generacion de otras renovables en Extremadura es:\n\n");
													minimo(otras11);
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
													prom1= promedio(otras11);
													printf("\nEl promedio de generacion de otras renovables en Extremadura es %f MWh.\n",prom1);
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
													MWhaeuro(otras11);
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
													MWhaGWh(otras11);
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
													desv1= desviacion(otras11);
													printf("\nLa desviación tipica de generacion de otras renovables en Extremadura es %.2f MWh.\n",desv1);
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
													vari1=varianza(otras11);
													printf("\nLa varianza de generacion de otras renovables en Extremadura es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de otras renovables de mayor a menor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=otras11[i];
													}
													mayoramenor(rectf11);
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
													printf("Los datos de generacion de otras renovables de menor a mayor en Extremadura son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf11[i]=otras11[i];
													}
													menoramayor(rectf11);
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
													MWhaMJ(otras11);
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
									printf("\nNo hay datos de generacion de residuos renovables en Extremadura.\n");
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
				}while(comunidad==11);//La condición es solo para el caso 3
			break;
			}	
		
		case 15://LaRioja
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de La Rioja:\n\n");
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
									printf("\nA continuacion se muestran los datos de generacion hidraulica en La Rioja:\n\n");
									strcpy(valoresenergia15[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia15[0].MWh= hidrau15[0];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Febrero");
									valoresenergia15[0].MWh= hidrau15[1];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Marzo");
									valoresenergia15[0].MWh= hidrau15[2];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Abril");
									valoresenergia15[0].MWh= hidrau15[3];
									printf("%s - %f MWh\t\n\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Mayo");
									valoresenergia15[0].MWh= hidrau15[4];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Junio");
									valoresenergia15[0].MWh= hidrau15[5];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Julio");
									valoresenergia15[0].MWh= hidrau15[6];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Agosto");
									valoresenergia15[0].MWh= hidrau15[7];
									printf("%s - %f MWh\t\n\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Septiembre");
									valoresenergia15[0].MWh= hidrau15[8];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Octubre");
									valoresenergia15[0].MWh= hidrau15[9];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Noviembre");
									valoresenergia15[0].MWh= hidrau15[10];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Diciembre");
									valoresenergia15[0].MWh= hidrau15[11];
									printf("%s - %f MWh\t\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
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
													printf("\nEl maximo de generacion hidraulica en La Rioja es:\n\n");
													maximo(hidrau15);
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
													printf("\nEl minimo de generacion hidraulica en La Rioja es:\n\n");
													minimo(hidrau15);
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
													prom1= promedio(hidrau15);
													printf("\nEl promedio de generacion hidraulica en La Rioja es %f MWh.\n",prom1);
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
													MWhaeuro(hidrau15);
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
													MWhaGWh(hidrau15);
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
													desv1= desviacion(hidrau15);
													printf("\nLa desviación tipica de generacion hidraulica en La Rioja es %.2f MWh.\n",desv1);
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
													vari1=varianza(hidrau15);
													printf("\nLa varianza de generacion hidraulica en La Rioja es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion hidraulica de mayor a menor en La Rioja son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf15[i]=hidrau15[i];
													}
													mayoramenor(rectf15);
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
													printf("Los datos de generacion hidraulica de menor a mayor en La Rioja son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf15[i]=hidrau15[i];
													}
													menoramayor(rectf15);
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
													MWhaMJ(hidrau15);
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
									printf("\nNo hay datos de generacion hidroeolica en La Rioja.\n");
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
									strcpy(valoresenergia15[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia15[0].MWh= eoli15[0];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Febrero");
									valoresenergia15[0].MWh= eoli15[1];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Marzo");
									valoresenergia15[0].MWh= eoli15[2];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Abril");
									valoresenergia15[0].MWh= eoli15[3];
									printf("%s - %f MWh\t\n\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Mayo");
									valoresenergia15[0].MWh= eoli15[4];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Junio");
									valoresenergia15[0].MWh= eoli15[5];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Julio");
									valoresenergia15[0].MWh= eoli15[6];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Agosto");
									valoresenergia15[0].MWh= eoli15[7];
									printf("%s - %f MWh\t\n\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Septiembre");
									valoresenergia15[0].MWh= eoli15[8];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Octubre");
									valoresenergia15[0].MWh= eoli15[9];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Noviembre");
									valoresenergia15[0].MWh= eoli15[10];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Diciembre");
									valoresenergia15[0].MWh= eoli15[11];
									printf("%s - %f MWh\t\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
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
													printf("\nEl maximo de generacion eolica en La rioja es:\n\n");
													maximo(eoli15);
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
													printf("\nEl minimo de generacion eolica en La Rioja es:\n\n");
													minimo(eoli15);
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
													prom1= promedio(eoli15);
													printf("\nEl promedio de generacion eolica en La Rioja es %f MWh.\n",prom1);
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
													MWhaeuro(eoli15);
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
													MWhaGWh(eoli15);
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
													desv1= desviacion(eoli15);
													printf("\nLa desviación tipica de generacion eolica en La Rioja es %.2f MWh.\n",desv1);
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
													vari1=varianza(eoli15);
													printf("\nLa varianza de generacion eolica en La Rioja es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion eolica de mayor a menor en La rioja son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=eoli15[i];
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
													printf("Los datos de generacion eolica de menor a mayor en La Rioja son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=eoli15[i];
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
													MWhaMJ(eoli15);
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
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en La Rioja:\n\n");
									strcpy(valoresenergia15[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia15[0].MWh= solar15[0];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Febrero");
									valoresenergia15[0].MWh= solar15[1];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Marzo");
									valoresenergia15[0].MWh= solar15[2];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Abril");
									valoresenergia15[0].MWh= solar15[3];
									printf("%s - %f MWh\t\n\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Mayo");
									valoresenergia15[0].MWh= solar15[4];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Junio");
									valoresenergia15[0].MWh= solar15[5];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Julio");
									valoresenergia15[0].MWh= solar15[6];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Agosto");
									valoresenergia15[0].MWh= solar15[7];
									printf("%s - %f MWh\t\n\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Septiembre");
									valoresenergia15[0].MWh= solar15[8];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Octubre");
									valoresenergia15[0].MWh= solar15[9];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Noviembre");
									valoresenergia15[0].MWh= solar15[10];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Diciembre");
									valoresenergia15[0].MWh= solar15[11];
									printf("%s - %f MWh\t\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
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
													printf("\nEl maximo de generacion solar fotovoltaica en La Rioja es:\n\n");
													maximo(solar15);
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
													printf("\nEl minimo de generacion solar fotovoltaica en La Rioja es:\n\n");
													minimo(solar15);
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
													prom1= promedio(solar15);
													printf("\nEl promedio de generacion solar fotovoltaica en La Rioja es %f MWh.\n",prom1);
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
													MWhaeuro(solar15);
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
													MWhaGWh(solar15);
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
													desv1= desviacion(solar15);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en La Rioja es %.2f MWh.\n",desv1);
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
													vari1=varianza(solar15);
													printf("\nLa varianza de generacion solar fotovoltaica en La Rioja es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en La Rioja son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=solar15[i];
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
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en La Rioja son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=solar15[i];
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
													MWhaMJ(solar15);
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
									printf("\nNo hay datos de generacion de solar termica en La Rioja.\n");
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
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en La Rioja:\n\n");
									strcpy(valoresenergia15[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia15[0].MWh= otras15[0];
									printf("%s - %f MWh\t\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Febrero");
									valoresenergia15[0].MWh= otras15[1];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Marzo");
									valoresenergia15[0].MWh= otras15[2];
									printf("%s - %f MWh\t\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Abril");
									valoresenergia15[0].MWh= otras15[3];
									printf("%s - %f MWh\t\n\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Mayo");
									valoresenergia15[0].MWh= otras15[4];
									printf("%s - %f MWh\t\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Junio");
									valoresenergia15[0].MWh= otras15[5];
									printf("%s - %f MWh\t\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Julio");
									valoresenergia15[0].MWh= otras15[6];
									printf("%s - %f MWh\t\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Agosto");
									valoresenergia15[0].MWh= otras15[7];
									printf("%s - %f MWh\t\n\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Septiembre");
									valoresenergia15[0].MWh= otras15[8];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Octubre");
									valoresenergia15[0].MWh= otras15[9];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Noviembre");
									valoresenergia15[0].MWh= otras15[10];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "Diciembre");
									valoresenergia15[0].MWh= otras15[11];
									printf("%s - %f MWh\t\n",valoresenergia15[0].mes,valoresenergia15[0].MWh);
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
													printf("\nEl maximo de generacion de otras renovables en La Rioja es:\n\n");
													maximo(otras15);
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
													printf("\nEl minimo de generacion de otras renovables en La Rioja es:\n\n");
													minimo(otras15);
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
													prom1= promedio(otras15);
													printf("\nEl promedio de generacion de otras renovables en La Rioja es %f MWh.\n",prom1);
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
													MWhaeuro(otras15);
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
													MWhaGWh(otras15);
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
													desv1= desviacion(otras15);
													printf("\nLa desviación tipica de generacion de otras renovables en La Rioja es %.2f MWh.\n",desv1);
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
													vari1=varianza(otras15);
													printf("\nLa varianza de generacion de otras renovables en La Rioja es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de otras renovables de mayor a menor en La Rioja son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=otras15[i];
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
													printf("Los datos de generacion de otras renovables de menor a mayor en La Rioja son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf2[i]=otras15[i];
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
													MWhaMJ(otras15);
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
									printf("\nNo hay datos de generacion de residuos renovables en La Rioja.\n");
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
				}while(comunidad==15);//La condición es solo para el caso 1
			break;
		}
		case 16://Melilla
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Melilla:\n\n");
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
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidraulica en Melilla.\n");
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
						case 2://Hidroeólica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Melilla.\n");
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
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion eolica en Melilla.\n");
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
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Melilla:\n\n");
									strcpy(valoresenergia16[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia16[0].MWh= solar16[0];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Febrero");
									valoresenergia16[0].MWh= solar16[1];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Marzo");
									valoresenergia16[0].MWh= solar16[2];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Abril");
									valoresenergia16[0].MWh= solar16[3];
									printf("%s - %f MWh\t\n\n",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Mayo");
									valoresenergia16[0].MWh= solar16[4];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Junio");
									valoresenergia16[0].MWh= solar16[5];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Julio");
									valoresenergia16[0].MWh= solar16[6];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Agosto");
									valoresenergia16[0].MWh= solar16[7];
									printf("%s - %f MWh\t\n\n",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Septiembre");
									valoresenergia16[0].MWh= solar16[8];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Octubre");
									valoresenergia16[0].MWh= solar16[9];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Noviembre");
									valoresenergia16[0].MWh= solar16[10];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Diciembre");
									valoresenergia16[0].MWh= solar16[11];
									printf("%s - %f MWh\t\n",valoresenergia16[0].mes,valoresenergia16[0].MWh);
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
													printf("\nEl maximo de generacion solar fotovoltaica en Melilla es:\n\n");
													maximo(solar16);
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
													printf("\nEl minimo de generacion solar fotovoltaica en Melilla es:\n\n");
													minimo(solar16);
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
													prom1= promedio(solar16);
													printf("\nEl promedio de generacion solar fotovoltaica en Melilla es %f MWh.\n",prom1);
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
													MWhaeuro(solar16);
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
													MWhaGWh(solar16);
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
													desv1= desviacion(solar16);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Melilla es %.2f MWh.\n",desv1);
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
													vari1=varianza(solar16);
													printf("\nLa varianza de generacion solar fotovoltaica en Melilla es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Melilla son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf16[i]=solar16[i];
													}
													mayoramenor(rectf16);
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
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Melilla son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf16[i]=solar16[i];
													}
													menoramayor(rectf16);
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
													MWhaMJ(solar16);
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
									printf("\nNo hay datos de generacion de solar termica en Melilla.\n");
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
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de otras renovables en Melilla.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atrás
									{
										system("cls");
										break;
									}
								}while(renovable==6);//La condición es solo para el caso 5
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de residuos renovable en Melilla:\n\n");
									strcpy(valoresenergia16[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia16[0].MWh= resid16[0];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Febrero");
									valoresenergia16[0].MWh= resid16[1];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Marzo");
									valoresenergia16[0].MWh= resid16[2];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Abril");
									valoresenergia16[0].MWh= resid16[3];
									printf("%s - %f MWh\t\n\n",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Mayo");
									valoresenergia16[0].MWh= resid16[4];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Junio");
									valoresenergia16[0].MWh= resid16[5];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Julio");
									valoresenergia16[0].MWh= resid16[6];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Agosto");
									valoresenergia16[0].MWh= resid16[7];
									printf("%s - %f MWh\t\n\n",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Septiembre");
									valoresenergia16[0].MWh= resid16[8];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Octubre");
									valoresenergia16[0].MWh= resid16[9];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Noviembre");
									valoresenergia16[0].MWh= resid16[10];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Diciembre");
									valoresenergia16[0].MWh= resid16[11];
									printf("%s - %f MWh\t\n",valoresenergia16[0].mes,valoresenergia16[0].MWh);
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
													printf("\nEl maximo de residuos renovables en Melilla es:\n\n");
													maximo(resid16);
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
													printf("\nEl minimo de residuos renovables en Melilla es:\n\n");
													minimo(resid16);
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
													prom1= promedio(resid16);
													printf("\nEl promedio de residuos renovables en Melilla es %f MWh.\n",prom1);
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
													MWhaeuro(resid16);
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
													MWhaGWh(resid16);
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
													desv1= desviacion(resid16);
													printf("\nLa desviación tipca de residuos renovables en Melilla es %.2f MWh.\n",desv1);
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
													vari1=varianza(resid16);
													printf("\nLa varianza de residuos renovables en Melilla es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de residuos renovables de mayor a menor en Melilla son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf16[i]=resid16[i];
													}
													mayoramenor(rectf16);
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
													printf("Los datos de residuos renovables de menor a mayor en Melilla son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf16[i]=resid16[i];
													}
													menoramayor(rectf16);
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
													MWhaMJ(resid16);
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
					}
				}while(comunidad==16);//La condición es solo para el caso 1
			break;
		}
		case 17://Murcia
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Murcia:\n\n");
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
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Murcia:\n\n");
									strcpy(valoresenergia17[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia17[0].MWh= hidrau17[0];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Febrero");
									valoresenergia17[0].MWh= hidrau17[1];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Marzo");
									valoresenergia17[0].MWh= hidrau17[2];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Abril");
									valoresenergia17[0].MWh= hidrau17[3];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Mayo");
									valoresenergia17[0].MWh= hidrau17[4];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Junio");
									valoresenergia17[0].MWh= hidrau17[5];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Julio");
									valoresenergia17[0].MWh= hidrau17[6];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Agosto");
									valoresenergia17[0].MWh= hidrau17[7];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Septiembre");
									valoresenergia17[0].MWh= hidrau17[8];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Octubre");
									valoresenergia17[0].MWh= hidrau17[9];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Noviembre");
									valoresenergia17[0].MWh= hidrau17[10];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Diciembre");
									valoresenergia17[0].MWh= hidrau17[11];
									printf("%s - %f MWh\t\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
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
													printf("\nEl maximo de generacion hidraulica en Murcia es:\n\n");
													maximo(hidrau17);
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
													printf("\nEl minimo de generacion hidraulica en Murcia es:\n\n");
													minimo(hidrau17);
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
													prom1= promedio(hidrau17);
													printf("\nEl promedio de generacion hidraulica en Murcia es %f MWh.\n",prom1);
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
													MWhaeuro(hidrau17);
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
													MWhaGWh(hidrau17);
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
													desv1= desviacion(hidrau17);
													printf("\nLa desviación tipica de generacion hidraulica en Murcia es %.2f MWh.\n",desv1);
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
													vari1=varianza(hidrau17);
													printf("\nLa varianza de generacion hidraulica en Murcia es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion hidraulica de mayor a menor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=hidrau17[i];
													}
													mayoramenor(rectf17);
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
													printf("Los datos de generacion hidraulica de menor a mayor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=hidrau17[i];
													}
													menoramayor(rectf17);
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
													MWhaMJ(hidrau17);
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
									printf("\nNo hay datos de generacion hidroeolica en Murcia.\n");
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
									printf("\nA continuacion se muestran los datos de generacion eolica en Murcia:\n\n");
									strcpy(valoresenergia17[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia17[0].MWh= eoli17[0];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Febrero");
									valoresenergia17[0].MWh= eoli17[1];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Marzo");
									valoresenergia17[0].MWh= eoli17[2];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Abril");
									valoresenergia17[0].MWh= eoli17[3];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Mayo");
									valoresenergia17[0].MWh= eoli17[4];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Junio");
									valoresenergia17[0].MWh= eoli17[5];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Julio");
									valoresenergia17[0].MWh= eoli17[6];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Agosto");
									valoresenergia17[0].MWh= eoli17[7];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Septiembre");
									valoresenergia17[0].MWh= eoli17[8];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Octubre");
									valoresenergia17[0].MWh= eoli17[9];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Noviembre");
									valoresenergia17[0].MWh= eoli17[10];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Diciembre");
									valoresenergia17[0].MWh= eoli17[11];
									printf("%s - %f MWh\t\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
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
													printf("\nEl maximo de generacion eolica en Murcia es:\n\n");
													maximo(eoli17);
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
													printf("\nEl minimo de generacion eolica en Murcia es:\n\n");
													minimo(eoli17);
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
													prom1= promedio(eoli17);
													printf("\nEl promedio de generacion eolica en Murcia es %f MWh.\n",prom1);
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
													MWhaeuro(eoli17);
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
													MWhaGWh(eoli17);
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
													desv1= desviacion(eoli17);
													printf("\nLa desviación tipica de generacion eolica en Murica es %.2f MWh.\n",desv1);
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
													vari1=varianza(eoli17);
													printf("\nLa varianza de generacion eolica en Murica es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion eolica de mayor a menor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=eoli17[i];
													}
													mayoramenor(rectf17);
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
													printf("Los datos de generacion eolica de menor a mayor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=eoli17[i];
													}
													menoramayor(rectf17);
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
													MWhaMJ(eoli17);
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
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Murcia:\n\n");
									strcpy(valoresenergia17[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia17[0].MWh= solar17[0];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Febrero");
									valoresenergia17[0].MWh= solar17[1];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Marzo");
									valoresenergia17[0].MWh= solar17[2];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Abril");
									valoresenergia17[0].MWh= solar17[3];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Mayo");
									valoresenergia17[0].MWh= solar17[4];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Junio");
									valoresenergia17[0].MWh= solar17[5];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Julio");
									valoresenergia17[0].MWh= solar17[6];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Agosto");
									valoresenergia17[0].MWh= solar17[7];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Septiembre");
									valoresenergia17[0].MWh= solar17[8];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Octubre");
									valoresenergia17[0].MWh= solar17[9];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Noviembre");
									valoresenergia17[0].MWh= solar17[10];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Diciembre");
									valoresenergia17[0].MWh= solar17[11];
									printf("%s - %f MWh\t\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
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
													printf("\nEl maximo de generacion solar fotovoltaica en Murcia es:\n\n");
													maximo(solar17);
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
													printf("\nEl minimo de generacion solar fotovoltaica en Murcia es:\n\n");
													minimo(solar17);
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
													prom1= promedio(solar17);
													printf("\nEl promedio de generacion solar fotovoltaica en Murcia es %f MWh.\n",prom1);
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
													MWhaeuro(solar17);
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
													MWhaGWh(solar17);
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
													desv1= desviacion(solar17);
													printf("\nLa desviación tipca de generacion solar fotovoltaica en Murcia es %.2f MWh.\n",desv1);
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
													vari1=varianza(solar17);
													printf("\nLa varianza de generacion solar fotovoltaica en Murcia es %.2f MWh*m^2.\n",vari1);
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
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=solar17[i];
													}
													mayoramenor(rectf17);
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
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=solar17[i];
													}
													menoramayor(rectf17);
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
													MWhaMJ(solar17);
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
									printf("\nA continuacion se muestran los datos de generacion solar termica en Murcia:\n\n");
									strcpy(valoresenergia17[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia17[0].MWh= termica17[0];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Febrero");
									valoresenergia17[0].MWh= termica17[1];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Marzo");
									valoresenergia17[0].MWh= termica17[2];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Abril");
									valoresenergia17[0].MWh= termica17[3];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Mayo");
									valoresenergia17[0].MWh= termica17[4];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Junio");
									valoresenergia17[0].MWh= termica17[5];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Julio");
									valoresenergia17[0].MWh= termica17[6];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Agosto");
									valoresenergia17[0].MWh= termica17[7];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Septiembre");
									valoresenergia17[0].MWh= termica17[8];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Octubre");
									valoresenergia17[0].MWh= termica17[9];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Noviembre");
									valoresenergia17[0].MWh= termica17[10];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Diciembre");
									valoresenergia17[0].MWh= termica17[11];
									printf("%s - %f MWh\t\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
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
													printf("\nEl maximo de generacion solar termica en Murcia es:\n\n");
													maximo(termica17);
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
													printf("\nEl minimo de generacion solar termica en Murcia es:\n\n");
													minimo(termica17);
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
													prom1= promedio(termica17);
													printf("\nEl promedio de generacion solar termica en Murcia es %f MWh.\n",prom1);
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
													MWhaeuro(termica17);
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
													MWhaGWh(termica17);
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
													desv1= desviacion(termica17);
													printf("\nLa desviación tipica de generacion solar termica en Murccia es %.2f MWh.\n",desv1);
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
													vari1=varianza(termica17);
													printf("\nLa varianza de generacion solar termica en Murcia es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion solar termica de mayor a menor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=termica17[i];
													}
													mayoramenor(rectf17);
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
													printf("Los datos de generacion solar termica de menor a mayor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=termica17[i];
													}
													menoramayor(rectf17);
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
													MWhaMJ(termica17);
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
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada función
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Murcia:\n\n");
									strcpy(valoresenergia17[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia17[0].MWh= otras17[0];
									printf("%s - %f MWh\t\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Febrero");
									valoresenergia17[0].MWh= otras17[1];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Marzo");
									valoresenergia17[0].MWh= otras17[2];
									printf("%s - %f MWh\t\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Abril");
									valoresenergia17[0].MWh= otras17[3];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Mayo");
									valoresenergia17[0].MWh= otras17[4];
									printf("%s - %f MWh\t\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Junio");
									valoresenergia17[0].MWh= otras17[5];
									printf("%s - %f MWh\t\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Julio");
									valoresenergia17[0].MWh= otras17[6];
									printf("%s - %f MWh\t\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Agosto");
									valoresenergia17[0].MWh= otras17[7];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Septiembre");
									valoresenergia17[0].MWh= otras17[8];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Octubre");
									valoresenergia17[0].MWh= otras17[9];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Noviembre");
									valoresenergia17[0].MWh= otras17[10];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Diciembre");
									valoresenergia17[0].MWh= otras17[11];
									printf("%s - %f MWh\t\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
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
													printf("\nEl maximo de generacion de otras renovables en Murcia es:\n\n");
													maximo(otras17);
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
													printf("\nEl minimo de generacion de otras renovables en Murcia es:\n\n");
													minimo(otras17);
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
													prom1= promedio(otras17);
													printf("\nEl promedio de generacion de otras renovables en Murcia es %f MWh.\n",prom1);
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
													MWhaeuro(otras17);
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
													MWhaGWh(otras17);
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
													desv1= desviacion(otras17);
													printf("\nLa desviación tipica de generacion de otras renovables en Murcia es %.2f MWh.\n",desv1);
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
													vari1=varianza(otras17);
													printf("\nLa varianza de generacion de otras renovables en Murcia es %.2f MWh*m^2.\n",vari1);
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
													printf("Los datos de generacion de otras renovables de mayor a menor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=otras17[i];
													}
													mayoramenor(rectf17);
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
													printf("Los datos de generacion de otras renovables de menor a mayor en Murcia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf17[i]=otras17[i];
													}
													menoramayor(rectf17);
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
													MWhaMJ(otras17);
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
									printf("\nNo hay datos de generacion de residuos renovables en Murcia.\n");
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
				}while(comunidad==17);//La condición es solo para el caso 1
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
