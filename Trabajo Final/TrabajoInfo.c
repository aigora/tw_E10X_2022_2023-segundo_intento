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
}energia12;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia13;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia14;

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

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia18;

typedef struct // Estructura para almacenar los valores energeticos en cada mes
{
	char mes[30];
	float MWh;
}energia19;


int main()
{
	int comunidad,i;
	int palabra=0,lineas=0,palabra2=0,lineas2=0,palabra3=0,lineas3=0,palabra4=0,lineas4=0,palabra5=0,lineas5=0,palabra6=0,lineas6=0,palabra7=0,lineas7=0;
	int palabra8=0,lineas8=0,palabra9=0,lineas9=0,palabra10=0,lineas10=0,palabra11=0,lineas11=0,palabra12=0,lineas12=0,palabra13=0,lineas13=0,palabra14=0,lineas14=0;
	int palabra15=0,lineas15=0,palabra16=0,lineas16=0,palabra17=0,lineas17=0,palabra18=0,lineas18=0,palabra19=0,lineas19=0;
	
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
	float hidrau12[11],hidroeoli12[11],eoli12[11],solar12[11],termica12[11],otras12[11],resid12[11],total12[11],rectf12[11];
	float hidrau13[11],hidroeoli13[11],eoli13[11],solar13[11],termica13[11],otras13[11],resid13[11],total13[11],rectf13[11];
	float hidrau14[11],hidroeoli14[11],eoli14[11],solar14[11],termica14[11],otras14[11],resid14[11],total14[11],rectf14[11];
	float hidrau15[11],hidroeoli15[11],eoli15[11],solar15[11],termica15[11],otras15[11],resid15[11],total15[11],rectf15[11];
	float hidrau16[11],hidroeoli16[11],eoli16[11],solar16[11],termica16[11],otras16[11],resid16[11],total16[11],rectf16[11];
	float hidrau17[11],hidroeoli17[11],eoli17[11],solar17[11],termica17[11],otras17[11],resid17[11],total17[11],rectf17[11];
	float hidrau18[11],hidroeoli18[11],eoli18[11],solar18[11],termica18[11],otras18[11],resid18[11],total18[11],rectf18[11];
	float hidrau19[11],hidroeoli19[11],eoli19[11],solar19[11],termica19[11],otras19[11],resid19[11],total19[11],rectf19[11];
		
	float max1,prom1,min1,desv1,vari1;
	float num,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16,num17,num18,num19;
	char datoAnd,datoArg,datoAst,datoCant,datoMan,datoLeon,datoCat,datoCeu,datoMad,datoVal,datoExtr,datoGal,datoBal,datoCan;
	char datoLarioja,datoMel,datoMurc,datoNav,datoPvasco;
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
	energia12 valoresenergia12[1];
	energia13 valoresenergia13[1];
	energia14 valoresenergia14[1];
	energia15 valoresenergia15[1];
	energia16 valoresenergia16[1];
	energia16 valoresenergia17[1];
	energia18 valoresenergia18[1];
	energia19 valoresenergia19[1];
	
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
	FILE *fGalicia;
	FILE *fBaleares;
	FILE *fCanarias;
	FILE *fLarioja;
	FILE *fMelilla;
	FILE *fMurcia;
	FILE *fNavarra;
	FILE *fPvasco;
	
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
		fclose(fAndalucia);	
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
						fscanf(fAragon,"%f",&num2);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas2==5)//Hidr�ulica
						{
							hidrau2[i]=num2;
							i++;
						}
						if(lineas2==6)//E�lica
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
						if(lineas2==9)//Genereaci�n total
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
		fclose(fAragon);	
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
						fscanf(fAsturias,"%f",&num3);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas3==5)//Hidr�ulica
						{
							hidrau3[i]=num3;
							i++;
						}
						if(lineas3==6)//E�lica
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
						if(lineas3==9)//Genereaci�n total
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
		fclose(fAsturias);	
	}
	
	fCantabria=fopen("GeneracionCan2.csv","r");
	if(fCantabria==NULL)//Lectura fichero de Cantabria
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
						fscanf(fCantabria,"%f",&num4);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas4==5)//Hidr�ulica
						{
							hidrau4[i]=num4;
							i++;
						}
						if(lineas4==6)//E�lica
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
						if(lineas4==10)//Genereaci�n total
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
		fclose(fCantabria);	
	}
	
	fCastillalaMancha=fopen("GeneracionCast_M2.csv","r");
	if(fCastillalaMancha==NULL)//Lectura fichero de Castilla-LaMancha
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
						fscanf(fCastillalaMancha,"%f",&num5);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas5==5)//Hidr�ulica
						{
							hidrau5[i]=num5;
							i++;
						}
						if(lineas5==6)//E�lica
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
		fclose(fCastillalaMancha);	
	}
	
	fLeon=fopen("GeneracionCast_L2.csv","r");
	if(fLeon==NULL)//Lectura fichero de Leon
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
				    	fscanf(fLeon,"%f",&num6);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas6==5)//Hidr�ulica
						{
							hidrau6[i]=num6;
							i++;
						}
						if(lineas6==6)//E�lica
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
		fclose(fLeon);	
	}
	
	fCatalunya=fopen("GeneracionCata2.csv","r");
	if(fCatalunya==NULL)//Lectura fichero de Andaluc�a
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
				    	fscanf(fCatalunya,"%f",&num7);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas7==5)//Hidr�ulica
						{
							hidrau7[i]=num7;
							i++;
						}
						if(lineas7==6)//E�lica
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
		fclose(fCatalunya);	
	}
	
	fMadrid=fopen("GeneracionMad2.csv","r");
	if(fMadrid==NULL)//Lectura fichero de Andaluc�a
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
				    	fscanf(fMadrid,"%f",&num9);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas9==5)//Hidr�ulica
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
		fclose(fMadrid);	
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
						fscanf(fValencia,"%f",&num10);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas10==5)//Hidr�ulica
						{
							hidrau10[i]=num10;
							i++;
						}
						if(lineas10==6)//E�lica
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
		fclose(fValencia);	
	}
	
	fExtremadura=fopen("GeneracionExtr2.csv","r");
	if(fExtremadura==NULL)//Lectura fichero de Extremadura
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
						fscanf(fExtremadura,"%f",&num11);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas11==5)//Hidr�ulica
						{
							hidrau11[i]=num11;
							i++;
						}
						if(lineas11==6)//E�lica
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
		fclose(fExtremadura);	
	}
	fGalicia=fopen("GeneracionGal2.csv","r");
	if(fGalicia==NULL)//Lectura fichero de Galicia
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fGalicia, "%c",&datoGal)!=EOF)//Lee el fichero hasta el final como si fuera un caracter
		{
			if(lineas12>=5 && lineas12<=9)//Para estas lineas interesan los datos
			{	
				if(datoGal==',')//Cuando hay una coma suma una palabra
				{
					++palabra12;
					if(palabra12>0 && palabra12<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fGalicia,"%f",&num12);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas12==5)//Hidr�ulica
						{
							hidrau12[i]=num12;
							i++;
						}
						if(lineas12==6)//E�lica
						{
							eoli12[i]=num12;
							i++;
						}
						if(lineas12==7)//Solar fotovoltaica
						{
							solar12[i]=num12;
							i++;
						}
						if(lineas12==8)//Otras renovables
						{
							otras12[i]=num12;
							i++;
						}
						if(lineas12==9)//Residuos renovables
						{
							resid12[i]=num12;
							i++;
						}
						if(lineas12==10)//Generacion total
						{
							total12[i]=num12;
							i++;
						}
					}
				}
			}
			if(datoGal=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas12;
			palabra12=0;
			i=0;
			}
		}
		fclose(fGalicia);	
	}
	
	fBaleares=fopen("GeneracionIslasBa2.csv","r");
	if(fBaleares==NULL)//Lectura fichero de las Islas Baleares
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fBaleares, "%c",&datoBal)!=EOF)//Lee el fichero hasta el final como si fuera un caracter
		{
			if(lineas13>=5 && lineas13<=9)//Para estas lineas interesan los datos
			{	
				if(datoBal==',')//Cuando hay una coma suma una palabra
				{
					++palabra13;
					if(palabra13>0 && palabra13<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fBaleares,"%f",&num13);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas13==5)//Hidr�ulica
						{
							hidrau13[i]=num13;
							i++;
						}
						if(lineas13==6)//E�lica
						{
							eoli13[i]=num13;
							i++;
						}
						if(lineas13==7)//Solar fotovoltaica
						{
							solar13[i]=num13;
							i++;
						}
						if(lineas13==8)//Otras renovables
						{
							otras13[i]=num13;
							i++;
						}
						if(lineas13==9)//Residuos renovables
						{
							resid13[i]=num13;
							i++;
						}
						if(lineas13==10)//Generacion total
						{
							total13[i]=num13;
							i++;
						}
					}
				}
			}
			if(datoBal=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas13;
			palabra13=0;
			i=0;
			}
		}
		fclose(fBaleares);	
	}
	fCanarias=fopen("GeneracionIslasCa2.csv","r");
	if(fCanarias==NULL)//Lectura fichero de las Islas Baleares
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fCanarias, "%c",&datoCan)!=EOF)//Lee el fichero hasta el final como si fuera un caracter
		{
			if(lineas14>=5 && lineas14<=9)//Para estas lineas interesan los datos
			{	
				if(datoCan==',')//Cuando hay una coma suma una palabra
				{
					++palabra14;
					if(palabra14>0 && palabra14<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fCanarias,"%f",&num14);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas14==5)//Hidr�ulica
						{
							hidrau14[i]=num14;
							i++;
						}
						if(lineas14==6)//Hidroeolica
						{
							hidroeoli14[i]=num14;
							i++;
						}
						if(lineas14==7)//Eolica
						{
							eoli14[i]=num14;
							i++;
						}
						if(lineas14==8)//Solar Fotovolt�ica
						{
							solar14[i]=num14;
							i++;
						}
						if(lineas14==9)//Otras renovables
						{
							otras14[i]=num14;
							i++;
						}
						if(lineas14==10)//Generacion total
						{
							total14[i]=num14;
							i++;
						}
					}
				}
			}
			if(datoCan=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas14;
			palabra14=0;
			i=0;
			}
		}
		fclose(fCanarias);	
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
						fscanf(fLarioja,"%f",&num15);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas15==5)//Hidr�ulica
						{
							hidrau15[i]=num15;
							i++;
						}
						if(lineas15==6)//E�lica
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
						if(lineas15==9)//Genereaci�n total
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
		fclose(fLarioja);	
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
						fscanf(fMelilla,"%f",&num16);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
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
						if(lineas16==7)//Genereaci�n total
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
		fclose(fMelilla);
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
						fscanf(fMurcia,"%f",&num17);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas17==5)//Hidr�ulica
						{
							hidrau17[i]=num17;
							i++;
						}
						if(lineas17==6)//E�lica
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
						if(lineas17==10)//Genereaci�n total
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
		fclose(fMurcia);	
	}
	
	fNavarra=fopen("GeneracionNava2.csv","r");
	if(fNavarra==NULL)//Lectura fichero de Navarra
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fNavarra, "%c",&datoNav)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas18>=5 && lineas18<=9)//Para estas lineas interesan los datos
			{	
				if(datoNav==',')//Cuando hay una coma suma una palabra
				{
					++palabra18;
					if(palabra18>0 && palabra18<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fNavarra,"%f",&num18);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas18==5)//Hidr�ulica
						{
							hidrau18[i]=num18;
							i++;
						}
						if(lineas18==6)//E�lica
						{
							eoli18[i]=num18;
							i++;
						}
						if(lineas18==7)//Solar fotovoltaica
						{
							solar18[i]=num18;
							i++;
						}
						if(lineas18==8)//Otras renovables
						{
							otras18[i]=num18;
							i++;
						}
						if(lineas18==9)//Genereaci�n total
						{
							total18[i]=num18;
							i++;
						}
						
					}
				}
			}
			if(datoNav=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas18;
			palabra18=0;
			i=0;
			}
		}
		fclose(fNavarra);	
	}
	
	fPvasco=fopen("GeneracionPaisVasco2.csv","r");
	if(fPvasco==NULL)//Lectura fichero de Pais Vasco
	{
		printf("Error al leer el archivo\n");
		return -1;
	}
	else
	{
		while(fscanf(fPvasco, "%c",&datoPvasco)!=EOF)//Lee el fichero hasta el final como si fueraun caracter
		{
			if(lineas19>=5 && lineas19<=10)//Para estas lineas interesan los datos
			{	
				if(datoPvasco==',')//Cuando hay una coma suma una palabra
				{
					++palabra19;
					if(palabra19>0 && palabra19<=13)//Son en trece cosas las que vamos a dividir cada linea (no leemos la primera palabra)
					{
						fscanf(fPvasco,"%f",&num19);//Hacemos otro scanf para poder leer los valores de cada linea como un n�mero
						if(lineas19==5)//Hidr�ulica
						{
							hidrau19[i]=num19;
							i++;
						}
						if(lineas19==6)//E�lica
						{
							eoli19[i]=num19;
							i++;
						}
						if(lineas19==7)//Solar fotovoltaica
						{
							solar19[i]=num19;
							i++;
						}
						if(lineas19==8)//Otras renovables
						{
							otras19[i]=num19;
							i++;
						}
						if(lineas19==9)//Residuos renovables
						{
							resid19[i]=num19;
							i++;
						}
						if(lineas19==10)//Genereaci�n total
						{
							total19[i]=num19;
							i++;
						}
						
					}
				}
			}
			if(datoPvasco=='\n')//Cuando detecta un salto de linea suma una linea y pone a cero palabra e i
			{
			++lineas19;
			palabra19=0;
			i=0;
			}
		}
		fclose(fPvasco);	
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Andalucia es:\n\n");
													maximo(hidrau);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Andalucia es:\n\n");
													minimo(hidrau);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau);
													printf("\nLa desviacion tipica de generacion hidraulica en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Andalucia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Andalucia es:\n\n");
													maximo(eoli);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Andalucia es:\n\n");
													minimo(eoli);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli);
													printf("\nLa desviacion tipica de generacion eolica en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Andalucia es:\n\n");
													maximo(solar);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Andalucia es:\n\n");
													minimo(solar);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar termica en Andalucia es:\n\n");
													maximo(termica);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar termica en Andalucia es:\n\n");
													minimo(termica);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(termica);
													printf("\nLa desviacion tipica de generacion solar termica en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Andalucia es:\n\n");
													maximo(otras);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Andalucia es:\n\n");
													minimo(otras);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras);
													printf("\nLa desviacion tipica de generacion de otras renovables en Andalucia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Andalucia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==1);//La condici�n es solo para el caso 1
			break;
		}
		case 2://Arag�n
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Aragon:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Aragon es:\n\n");
													maximo(hidrau2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Aragon es:\n\n");
													minimo(hidrau2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau2);
													printf("\nLa desviacion tipica de generacion hidraulica en Aragon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Aragon.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Aragon es:\n\n");
													maximo(eoli2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Aragon es:\n\n");
													minimo(eoli2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli2);
													printf("\nLa desviacion tipica de generacion eolica en Aragon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Aragon es:\n\n");
													maximo(solar2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Aragon es:\n\n");
													minimo(solar2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar2);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Aragon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en Aragon.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Aragon es:\n\n");
													maximo(otras2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Aragon es:\n\n");
													minimo(otras2);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras2);
													printf("\nLa desviacion tipica de generacion de otras renovables en Aragon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Aragon.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==2);//La condici�n es solo para el caso 1
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Asturias es:\n\n");
													maximo(hidrau3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Asturias es:\n\n");
													minimo(hidrau3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau3);
													printf("\nLa desviacion tipica de generacion hidraulica en Asturias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Asturias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Asturias es:\n\n");
													maximo(eoli3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Asturias es:\n\n");
													minimo(eoli3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli3);
													printf("\nLa desviacion tipica de generacion eolica en Asturias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Asturias es:\n\n");
													maximo(solar3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Asturias es:\n\n");
													minimo(solar3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar3);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Asturias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en Asturias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Asturias es:\n\n");
													maximo(otras3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Asturias es:\n\n");
													minimo(otras3);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras3);
													printf("\nLa desviacion tipica de generacion de otras renovables en Asturias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Asturias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==3);//La condici�n es solo para el caso 3
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Cantabria es:\n\n");
													maximo(hidrau4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Cantabria es:\n\n");
													minimo(hidrau4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau4);
													printf("\nLa desviacion tipica de generacion hidraulica en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Cantabria.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Cantabria es:\n\n");
													maximo(eoli4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Cantabria es:\n\n");
													minimo(eoli4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli4);
													printf("\nLa desviacion tipica de generacion eolica en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Cantabria es:\n\n");
													maximo(solar4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Cantabria es:\n\n");
													minimo(solar4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar4);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en Asturias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Cantabria es:\n\n");
													maximo(otras4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Cantabria es:\n\n");
													minimo(otras4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras4);
													printf("\nLa desviacion tipica de generacion de otras renovables en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de residuos renovables en Cantabria es:\n\n");
													maximo(resid4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de residuos renovables en Cantabria es:\n\n");
													minimo(resid4);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(resid4);
													printf("\nLa desviacion tipica de generacion de residuos renovables en Cantabria es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==4);//La condici�n es solo para el caso 4
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									printf("%s - %f MWh\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Castilla-La Mancha es:\n\n");
													maximo(hidrau5);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Castilla-La Mancha es:\n\n");
													minimo(hidrau5);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau5);
													printf("\nLa desviacion tipica de generacion hidraulica en Castilla-La Mancha es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Castilla-La Mancha.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Castilla-La Manchaes:\n\n");
													maximo(eoli5);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Castilla-La Mancha es:\n\n");
													minimo(eoli5);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli5);
													printf("\nLa desviacion tipica de generacion eolica en Castilla-La Mancha es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Castilla-La Mancha es:\n\n");
													maximo(solar5);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Castilla-La Mancha es:\n\n");
													minimo(solar5);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar5);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Castilla-La Mancha es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion solar termica en Castilla-La Mancha.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 7
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									printf("%s - %f MWh\t\t",valoresenergia5[0].mes,valoresenergia5[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Castilla-La Mancha es:\n\n");
													maximo(otras5);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Castilla-La Manchaes:\n\n");
													minimo(otras5);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras5);
													printf("\nLa desviacion tipica de generacion de otras renovables en Castilla-La Manchaes %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Castilla-La Mancha.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==5);//La condici�n es solo para el caso 5
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Castilla y Leon es:\n\n");
													maximo(hidrau6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Castilla y Leon es:\n\n");
													minimo(hidrau6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau6);
													printf("\nLa desviacion tipica de generacion hidraulica en Castilla y Leon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Castilla y Leon.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Castilla y Leon es:\n\n");
													maximo(eoli6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Castilla y Leon es:\n\n");
													minimo(eoli6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli6);
													printf("\nLa desviacion tipica de generacion eolica en Castilla y Leon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Castilla y Leon es:\n\n");
													maximo(solar6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Castilla y Leon es:\n\n");
													minimo(solar6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar6);
													printf("\nLa desviacion tipica de generacion solar fotovoltaica en Castilla y Leon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									printf("%s - %f MWh\t\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar termica en Castilla y Leon es:\n\n");
													maximo(termica6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar termica en Castilla y Leon es:\n\n");
													minimo(termica6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(termica6);
													printf("\nLa desviacion tipica de generacion solar termica en Castilla y Leon es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									printf("%s - %f MWh\t\t",valoresenergia6[0].mes,valoresenergia6[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Castilla y Leon es:\n\n");
													maximo(otras6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Castilla y Leon es:\n\n");
													minimo(otras6);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras6);
													printf("\nLa desviacion tipica de generacion de otras renovables en Castilla y Leones %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Castilla y Leon.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==6);//La condici�n es solo para el caso 6
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Catalunya es:\n\n");
													maximo(hidrau7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Catalunya es:\n\n");
													minimo(hidrau7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau7);
													printf("\nLa desviacion tipica de generacion hidraulica en Catalunya es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Catalunya.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Catalunya es:\n\n");
													maximo(eoli7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Catalunya es:\n\n");
													minimo(eoli7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli7);
													printf("\nLa desviacion tipica de generacion eolica en Catalunya es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									printf("%s - %f MWh\t\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Catalunya es:\n\n");
													maximo(solar7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Catalunya es:\n\n");
													minimo(solar7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar7);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Catalunya es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar termica en Catalunya:\n\n");
									strcpy(valoresenergia7[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia7[0].MWh= termica7[0];
									printf("%s - %f MWh\t\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Febrero");
									valoresenergia7[0].MWh= termica7[1];
									printf("%s - %f MWh\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Marzo");
									valoresenergia7[0].MWh= termica7[2];
									printf("%s - %f MWh\t\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Abril");
									valoresenergia7[0].MWh= termica7[3];
									printf("%s - %f MWh\t\n\n",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Mayo");
									valoresenergia7[0].MWh= termica7[4];
									printf("%s - %f MWh\t\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
									strcpy(valoresenergia7[0].mes, "Junio");
									valoresenergia7[0].MWh= termica7[5];
									printf("%s - %f MWh\t\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar termica en Catalunya es:\n\n");
													maximo(termica7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar termica en Catalunya es:\n\n");
													minimo(termica7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(termica7);
													printf("\nLa desviacion tipica de generacion solar termica en Catalunya es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									printf("%s - %f MWh\t\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Catalunya es:\n\n");
													maximo(otras7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Catalunya es:\n\n");
													minimo(otras7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras7);
													printf("\nLa desviacion tipica de generacion de otras renovables en Catalunya es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									printf("%s - %f MWh\t\t",valoresenergia7[0].mes,valoresenergia7[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de residuos renovables en Catalunya es:\n\n");
													maximo(resid7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de residuos renovables en Catalunya es:\n\n");
													minimo(resid7);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(resid7);
													printf("\nLa desviacion tipica de generacion de residuos renovables en Catalunya es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}
					}
				}while(comunidad==7);//La condici�n es solo para el caso 7
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
					if(atras==0)//Para volver hacia atr�s
					{
						system("cls");
						break;
					}
				}while(comunidad==8);//La condici�n es solo para el caso 8
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en la Comunidad de Madrid:\n\n");
									strcpy(valoresenergia9[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia9[0].MWh= hidrau9[0];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Febrero");
									valoresenergia9[0].MWh= hidrau9[1];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Marzo");
									valoresenergia9[0].MWh= hidrau9[2];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en la Comunidad de Madrid es:\n\n");
													maximo(hidrau9);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en la Comunidad de Madrid es:\n\n");
													minimo(hidrau9);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau9);
													printf("\nLa desviacion tipica de generacion hidraulica en la Comunidad de Madrid es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en la Comunidad de Madrid.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
						{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion eolica en la Comunidad de Madrid.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en la Comunidad de Madrid:\n\n");
									strcpy(valoresenergia9[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia9[0].MWh= solar9[0];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Febrero");
									valoresenergia9[0].MWh= solar9[1];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Marzo");
									valoresenergia9[0].MWh= solar9[2];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Abril");
									valoresenergia9[0].MWh= solar9[3];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Mayo");
									valoresenergia9[0].MWh= solar9[4];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Junio");
									valoresenergia9[0].MWh= solar9[5];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Julio");
									valoresenergia9[0].MWh= solar9[6];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en la Comunidad de Madrid es:\n\n");
													maximo(solar9);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en la Comunidad de Madrid es:\n\n");
													minimo(solar9);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar9);
													printf("\nLa desviacion tipica de generacion solar fotovoltaica en la Comunidad de Madrid es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion solar termica en la Comunidad de Madrid.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en la Comunidad de Madrid es:\n\n");
													maximo(otras9);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en la Comunidad de Madrid  es:\n\n");
													minimo(otras9);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras9);
													printf("\nLa desviacion tipica de generacion de otras renovables en la Comunidad de Madrid  es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de residuos renovables en la Comunidad de Madrid :\n\n");
									strcpy(valoresenergia9[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia9[0].MWh= resid9[0];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Febrero");
									valoresenergia9[0].MWh= resid9[1];
									printf("%s - %f MWh\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Marzo");
									valoresenergia9[0].MWh= resid9[2];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Abril");
									valoresenergia9[0].MWh= resid9[3];
									printf("%s - %f MWh\t\n\n",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Mayo");
									valoresenergia9[0].MWh= resid9[4];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Junio");
									valoresenergia9[0].MWh= resid9[5];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
									strcpy(valoresenergia9[0].mes, "Julio");
									valoresenergia9[0].MWh= resid9[6];
									printf("%s - %f MWh\t\t",valoresenergia9[0].mes,valoresenergia9[0].MWh);
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de residuos renovables en la Comunidad de Madrid es:\n\n");
													maximo(resid9);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de residuos renovables en la Comunidad de Madrid es:\n\n");
													minimo(resid9);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(resid9);
													printf("\nEl promedio de generacion de residuos renovables en la Comunidad de Madrid es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(resid9);
													printf("\nLa desviacion tipica de generacion de residuos renovables en la Comunidad de Madrid es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de residuos renovables de mayor a menor en la Comunidad de Madrid son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=resid9[i];
													}
													mayoramenor(rectf9);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de residuos renovables de menor a mayor en la Comunidad de Madrid son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf9[i]=resid9[i];
													}
													menoramayor(rectf9);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}
					}
				}while(comunidad==9);//La condici�n es solo para el caso 9
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Valencia es:\n\n");
													maximo(hidrau10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Valencia es:\n\n");
													minimo(hidrau10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau10);
													printf("\nLa desviacion tipica de generacion hidraulica en Valencia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Valencia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Valencia es:\n\n");
													maximo(eoli10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Valencia es:\n\n");
													minimo(eoli10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli10);
													printf("\nLa desviacion tipica de generacion eolica en Valencia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Valencia es:\n\n");
													maximo(solar10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Valencia es:\n\n");
													minimo(solar10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar10);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Valencia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar termica en Valencia es:\n\n");
													maximo(termica10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar termica en Valencia es:\n\n");
													minimo(termica10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(termica10);
													printf("\nLa desviacion tipica de generacion solar termica en Valencia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Valencia es:\n\n");
													maximo(otras10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Valencia es:\n\n");
													minimo(otras10);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras10);
													printf("\nLa desviacion tipica de generacion de otras renovables en Valencia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Valencia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==10);//La condici�n es solo para el caso 3
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Extremadura es:\n\n");
													maximo(hidrau11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Extremadura es:\n\n");
													minimo(hidrau11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau11);
													printf("\nLa desviacion tipica de generacion hidraulica en Extremadura es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Extremadura.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Extremadura es:\n\n");
													maximo(eoli11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Extremadura es:\n\n");
													minimo(eoli11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli11);
													printf("\nLa desviacion tipica de generacion eolica en Extremadura es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Extremadura es:\n\n");
													maximo(solar11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Extremadura es:\n\n");
													minimo(solar11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar11);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Extremadura es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar termica en Extremadura es:\n\n");
													maximo(termica11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar termica en Extremadura es:\n\n");
													minimo(termica11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(termica11);
													printf("\nLa desviacion tipica de generacion solar termica en Extremadura es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Extremadura es:\n\n");
													maximo(otras11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Extremadura es:\n\n");
													minimo(otras11);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras11);
													printf("\nLa desviacion tipica de generacion de otras renovables en Extremadura es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Extremadura.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==11);//La condici�n es solo para el caso 11
			break;
			}	
		case 12://Galicia
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Galicia:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Galicia:\n\n");
									strcpy(valoresenergia12[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia12[0].MWh= hidrau12[0];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Febrero");
									valoresenergia12[0].MWh= hidrau12[1];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Marzo");
									valoresenergia12[0].MWh= hidrau12[2];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Abril");
									valoresenergia12[0].MWh= hidrau12[3];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Mayo");
									valoresenergia12[0].MWh= hidrau12[4];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Junio");
									valoresenergia12[0].MWh= hidrau12[5];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Julio");
									valoresenergia12[0].MWh= hidrau12[6];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Agosto");
									valoresenergia12[0].MWh= hidrau12[7];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Septiembre");
									valoresenergia12[0].MWh= hidrau12[8];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Octubre");
									valoresenergia12[0].MWh= hidrau12[9];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Noviembre");
									valoresenergia12[0].MWh= hidrau12[10];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Diciembre");
									valoresenergia12[0].MWh= hidrau12[11];
									printf("%s - %f MWh\t\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Galicia es:\n\n");
													maximo(hidrau12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Galicia es:\n\n");
													minimo(hidrau12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidrau12);
													printf("\nEl promedio de generacion hidraulica en Galicia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidrau12);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidrau12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau12);
													printf("\nLa desviacion tipica de generacion hidraulica en Galicia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(hidrau12);
													printf("\nLa varianza de generacion hidraulica en Galicia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de mayor a menor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=hidrau12[i];
													}
													mayoramenor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de menor a mayor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=hidrau12[i];
													}
													menoramayor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(hidrau12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Galicia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en Galicia:\n\n");
									strcpy(valoresenergia12[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia12[0].MWh= eoli12[0];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Febrero");
									valoresenergia12[0].MWh= eoli12[1];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Marzo");
									valoresenergia12[0].MWh= eoli12[2];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Abril");
									valoresenergia12[0].MWh= eoli12[3];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Mayo");
									valoresenergia12[0].MWh= eoli12[4];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Junio");
									valoresenergia12[0].MWh= eoli12[5];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Julio");
									valoresenergia12[0].MWh= eoli12[6];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Agosto");
									valoresenergia12[0].MWh= eoli12[7];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Septiembre");
									valoresenergia12[0].MWh= eoli12[8];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Octubre");
									valoresenergia12[0].MWh= eoli12[9];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Noviembre");
									valoresenergia12[0].MWh= eoli12[10];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Diciembre");
									valoresenergia12[0].MWh= eoli12[11];
									printf("%s - %f MWh\t\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Galicia es:\n\n");
													maximo(eoli12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Galicia es:\n\n");
													minimo(eoli12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli12);
													printf("\nEl promedio de generacion eolica en Galicia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli12);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli12);
													printf("\nLa desviacion tipica de generacion eolica en Galicia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(eoli12);
													printf("\nLa varianza de generacion eolica en Galicia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de mayor a menor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=eoli12[i];
													}
													mayoramenor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de menor a mayor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=eoli12[i];
													}
													menoramayor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(eoli12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Galicia:\n\n");
									strcpy(valoresenergia12[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia12[0].MWh= solar12[0];
									printf("%s - %f MWh\t\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Febrero");
									valoresenergia12[0].MWh= solar12[1];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Marzo");
									valoresenergia12[0].MWh= solar12[2];
									printf("%s - %f MWh\t\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Abril");
									valoresenergia12[0].MWh= solar12[3];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Mayo");
									valoresenergia12[0].MWh= solar12[4];
									printf("%s - %f MWh\t\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Junio");
									valoresenergia12[0].MWh= solar12[5];
									printf("%s - %f MWh\t\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Julio");
									valoresenergia12[0].MWh= solar12[6];
									printf("%s - %f MWh\t\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Agosto");
									valoresenergia12[0].MWh= solar12[7];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Septiembre");
									valoresenergia12[0].MWh= solar12[8];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Octubre");
									valoresenergia12[0].MWh= solar12[9];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Noviembre");
									valoresenergia12[0].MWh= solar12[10];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Diciembre");
									valoresenergia12[0].MWh= solar12[11];
									printf("%s - %f MWh\t\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Galicia es:\n\n");
													maximo(solar12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Galicia es:\n\n");
													minimo(solar12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar12);
													printf("\nEl promedio de generacion solar fotovoltaica en Galicia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar12);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar12);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Galicia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(solar12);
													printf("\nLa varianza de generacion solar fotovoltaica en Galicia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=solar12[i];
													}
													mayoramenor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=solar12[i];
													}
													menoramayor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(solar12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de soar termica en Galicia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Galicia:\n\n");
									strcpy(valoresenergia12[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia12[0].MWh= otras12[0];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Febrero");
									valoresenergia12[0].MWh= otras12[1];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Marzo");
									valoresenergia12[0].MWh= otras12[2];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Abril");
									valoresenergia12[0].MWh= otras12[3];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Mayo");
									valoresenergia12[0].MWh= otras12[4];
									printf("%s - %f MWh\t\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Junio");
									valoresenergia12[0].MWh= otras12[5];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Julio");
									valoresenergia12[0].MWh= otras12[6];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Agosto");
									valoresenergia12[0].MWh= otras12[7];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Septiembre");
									valoresenergia12[0].MWh= otras12[8];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Octubre");
									valoresenergia12[0].MWh= otras12[9];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Noviembre");
									valoresenergia12[0].MWh= otras12[10];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Diciembre");
									valoresenergia12[0].MWh= otras12[11];
									printf("%s - %f MWh\t\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Galicia es:\n\n");
													maximo(otras12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Galicia es:\n\n");
													minimo(otras12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras12);
													printf("\nEl promedio de generacion de otras renovables en Galicia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras12);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras12);
													printf("\nLa desviacion tipica de generacion de otras renovables en Galicia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(otras12);
													printf("\nLa varianza de generacion de otras renovables en Galicia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de mayor a menor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=otras12[i];
													}
													mayoramenor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de menor a mayor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=otras12[i];
													}
													menoramayor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(otras12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de residuos renovables termica en Galicia:\n\n");
									strcpy(valoresenergia12[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia12[0].MWh= resid12[0];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Febrero");
									valoresenergia12[0].MWh= resid12[1];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Marzo");
									valoresenergia12[0].MWh= resid12[2];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Abril");
									valoresenergia12[0].MWh= resid12[3];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Mayo");
									valoresenergia12[0].MWh= resid12[4];
									printf("%s - %f MWh\t\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Junio");
									valoresenergia12[0].MWh= resid12[5];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Julio");
									valoresenergia12[0].MWh= resid12[6];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Agosto");
									valoresenergia12[0].MWh= resid12[7];
									printf("%s - %f MWh\t\n\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Septiembre");
									valoresenergia12[0].MWh= resid12[8];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Octubre");
									valoresenergia12[0].MWh= resid12[9];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Noviembre");
									valoresenergia12[0].MWh= resid12[10];
									printf("%s - %f MWh\t",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									strcpy(valoresenergia12[0].mes, "Diciembre");
									valoresenergia12[0].MWh= resid12[11];
									printf("%s - %f MWh\t\n",valoresenergia12[0].mes,valoresenergia12[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion en residuos renovables en Galicia es:\n\n");
													maximo(resid12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion en residuos renovables en Galicia es:\n\n");
													minimo(resid12);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(resid12);
													printf("\nEl promedio de generacion en residuos renovables en Galicia es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(resid12);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(resid12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(resid12);
													printf("\nLa desviacion tipica de generacion en residuos renovables en Galicia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(resid12);
													printf("\nLa varianza de generacion en residuos renovables en Galicia es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion en residuos renovables de mayor a menor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=resid12[i];
													}
													mayoramenor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion en residuos renovables de menor a mayor en Galicia son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf12[i]=resid12[i];
													}
													menoramayor(rectf12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(resid12);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==12);//La condici�n es solo para el caso 12
			break;
			}	
		case 13://Islas Baleares
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Islas Baleares:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidraulica en Islas Baleares.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en las Islas Baleares.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en las Islas Baleares:\n\n");
									strcpy(valoresenergia13[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia13[0].MWh= eoli13[0];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Febrero");
									valoresenergia13[0].MWh= eoli13[1];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Marzo");
									valoresenergia13[0].MWh= eoli13[2];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Abril");
									valoresenergia13[0].MWh= eoli13[3];
									printf("%s - %f MWh\t\n\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Mayo");
									valoresenergia13[0].MWh= eoli13[4];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Junio");
									valoresenergia13[0].MWh= eoli13[5];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Julio");
									valoresenergia13[0].MWh= eoli13[6];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Agosto");
									valoresenergia13[0].MWh= eoli13[7];
									printf("%s - %f MWh\t\n\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Septiembre");
									valoresenergia13[0].MWh= eoli13[8];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Octubre");
									valoresenergia13[0].MWh= eoli13[9];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Noviembre");
									valoresenergia13[0].MWh= eoli13[10];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Diciembre");
									valoresenergia13[0].MWh= eoli13[11];
									printf("%s - %f MWh\t\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en las Islas Baleares es:\n\n");
													maximo(eoli13);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en las Islas Baleares es:\n\n");
													minimo(eoli13);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli13);
													printf("\nEl promedio de generacion eolica en las Islas Baleares es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli13);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli13);
													printf("\nLa desviacion tipica de generacion eolica en las Islas Baleares es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(eoli13);
													printf("\nLa varianza de generacion eolica en las Islas Baleares es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de mayor a menor en las Islas Baleares son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf13[i]=eoli13[i];
													}
													mayoramenor(rectf13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de menor a mayor en las Islas Baleares son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf13[i]=eoli13[i];
													}
													menoramayor(rectf13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(eoli13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en las Islas Baleares:\n\n");
									strcpy(valoresenergia13[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia13[0].MWh= solar13[0];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Febrero");
									valoresenergia13[0].MWh= solar13[1];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Marzo");
									valoresenergia13[0].MWh= solar13[2];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Abril");
									valoresenergia13[0].MWh= solar13[3];
									printf("%s - %f MWh\t\n\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Mayo");
									valoresenergia13[0].MWh= solar13[4];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Junio");
									valoresenergia13[0].MWh= solar13[5];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Julio");
									valoresenergia13[0].MWh= solar13[6];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Agosto");
									valoresenergia13[0].MWh= solar13[7];
									printf("%s - %f MWh\t\n\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Septiembre");
									valoresenergia13[0].MWh= solar13[8];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Octubre");
									valoresenergia13[0].MWh= solar13[9];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Noviembre");
									valoresenergia13[0].MWh= solar13[10];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Diciembre");
									valoresenergia13[0].MWh= solar13[11];
									printf("%s - %f MWh\t\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en las Islas Baleares es:\n\n");
													maximo(solar13);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en las Islas Baleares es:\n\n");
													minimo(solar13);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar13);
													printf("\nEl promedio de generacion solar fotovoltaica en las Islas Baleares es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar13);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar13);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en las Islas Baleares es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(solar13);
													printf("\nLa varianza de generacion solar fotovoltaica en las Islas Baleares es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en las Islas Baleares son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf13[i]=solar13[i];
													}
													mayoramenor(rectf13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en las Islas Baleares son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf13[i]=solar13[i];
													}
													menoramayor(rectf13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(solar13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en las Islas Baleares.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en las Islas Baleares:\n\n");
									strcpy(valoresenergia13[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia13[0].MWh= otras13[0];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Febrero");
									valoresenergia13[0].MWh= otras13[1];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Marzo");
									valoresenergia13[0].MWh= otras13[2];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Abril");
									valoresenergia13[0].MWh= otras13[3];
									printf("%s - %f MWh\t\n\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Mayo");
									valoresenergia13[0].MWh= otras13[4];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Junio");
									valoresenergia13[0].MWh= otras13[5];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Julio");
									valoresenergia13[0].MWh= otras13[6];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Agosto");
									valoresenergia13[0].MWh= otras13[7];
									printf("%s - %f MWh\t\n\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Septiembre");
									valoresenergia13[0].MWh= otras13[8];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Octubre");
									valoresenergia13[0].MWh= otras13[9];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Noviembre");
									valoresenergia13[0].MWh= otras13[10];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Diciembre");
									valoresenergia13[0].MWh= otras13[11];
									printf("%s - %f MWh\t\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en las Islas Baleares es:\n\n");
													maximo(otras13);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en las Islas Baleares es:\n\n");
													minimo(otras13);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras13);
													printf("\nEl promedio de generacion de otras renovables en las Islas Baleares es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras13);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras13);
													printf("\nLa desviacion tipica de generacion de otras renovables en las Islas Baleares es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(otras13);
													printf("\nLa varianza de generacion de otras renovables en las Islas Baleares es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de mayor a menor en las Islas Baleares son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf13[i]=otras13[i];
													}
													mayoramenor(rectf13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de menor a mayor en las Islas Baleares son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf13[i]=otras13[i];
													}
													menoramayor(rectf13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(otras13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de residuos renovables en las Islas Baleares:\n\n");
									strcpy(valoresenergia13[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia13[0].MWh= resid13[0];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Febrero");
									valoresenergia13[0].MWh= resid13[1];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Marzo");
									valoresenergia13[0].MWh= resid13[2];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Abril");
									valoresenergia13[0].MWh= resid13[3];
									printf("%s - %f MWh\t\n\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Mayo");
									valoresenergia13[0].MWh= resid13[4];
									printf("%s - %f MWh\t\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Junio");
									valoresenergia13[0].MWh= resid13[5];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Julio");
									valoresenergia13[0].MWh= resid13[6];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Agosto");
									valoresenergia13[0].MWh= resid13[7];
									printf("%s - %f MWh\t\n\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Septiembre");
									valoresenergia13[0].MWh= resid13[8];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Octubre");
									valoresenergia13[0].MWh= resid13[9];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Noviembre");
									valoresenergia13[0].MWh= resid13[10];
									printf("%s - %f MWh\t",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									strcpy(valoresenergia13[0].mes, "Diciembre");
									valoresenergia13[0].MWh= resid13[11];
									printf("%s - %f MWh\t\n",valoresenergia13[0].mes,valoresenergia13[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de residuos renovables en las Islas Baleares es:\n\n");
													maximo(resid13);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de residuos renovables en las Islas Baleares es:\n\n");
													minimo(resid13);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(resid13);
													printf("\nEl promedio de generacion de residuos renovables en las Islas Baleares es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(resid13);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(resid13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(resid13);
													printf("\nLa desviacion tipica de generacion de residuos renovables en las Islas Baleares es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(resid13);
													printf("\nLa varianza de generacion de residuos renovables en las Islas Baleares es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de residuos renovables de mayor a menor en las Islas Baleares son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf13[i]=resid13[i];
													}
													mayoramenor(rectf13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de residuos renovables de menor a mayor en las Islas Baleares son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf13[i]=resid13[i];
													}
													menoramayor(rectf13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(resid13);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==13);//La condici�n es solo para el caso 13
			break;
			}
		case 14://Islas Canarias
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Islas Canarias:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en las Islas Canarias:\n\n");
									strcpy(valoresenergia14[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia14[0].MWh= hidrau14[0];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Febrero");
									valoresenergia14[0].MWh= hidrau14[1];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Marzo");
									valoresenergia14[0].MWh= hidrau14[2];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Abril");
									valoresenergia14[0].MWh= hidrau14[3];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Mayo");
									valoresenergia14[0].MWh= hidrau14[4];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Junio");
									valoresenergia14[0].MWh= hidrau14[5];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Julio");
									valoresenergia14[0].MWh= hidrau14[6];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Agosto");
									valoresenergia14[0].MWh= hidrau14[7];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Septiembre");
									valoresenergia14[0].MWh= hidrau14[8];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Octubre");
									valoresenergia14[0].MWh= hidrau14[9];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Noviembre");
									valoresenergia14[0].MWh= hidrau14[10];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Diciembre");
									valoresenergia14[0].MWh= hidrau14[11];
									printf("%s - %f MWh\t\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en las Islas Canarias es:\n\n");
													maximo(hidrau14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en las Islas Canarias es:\n\n");
													minimo(hidrau14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidrau14);
													printf("\nEl promedio de generacion hidraulica en las Islas Canarias es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidrau14);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidrau14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau14);
													printf("\nLa desviacion tipica de generacion hidraulica en las Islas Canarias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(hidrau14);
													printf("\nLa varianza de generacion hidraulica en las Islas Canarias es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de mayor a menor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=hidrau14[i];
													}
													mayoramenor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de menor a mayor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=hidrau14[i];
													}
													menoramayor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(hidrau14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidroeolica en las Islas Canarias:\n\n");
									strcpy(valoresenergia14[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia14[0].MWh= hidroeoli14[0];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Febrero");
									valoresenergia14[0].MWh= hidroeoli14[1];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Marzo");
									valoresenergia14[0].MWh= hidroeoli14[2];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Abril");
									valoresenergia14[0].MWh= hidroeoli14[3];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Mayo");
									valoresenergia14[0].MWh= hidroeoli14[4];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Junio");
									valoresenergia14[0].MWh= hidroeoli14[5];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Julio");
									valoresenergia14[0].MWh= hidroeoli14[6];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Agosto");
									valoresenergia14[0].MWh= hidroeoli14[7];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Septiembre");
									valoresenergia14[0].MWh= hidroeoli14[8];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Octubre");
									valoresenergia14[0].MWh= hidroeoli14[9];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Noviembre");
									valoresenergia14[0].MWh= hidroeoli14[10];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Diciembre");
									valoresenergia14[0].MWh= hidroeoli14[11];
									printf("%s - %f MWh\t\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidroeolica en las Islas Canarias es:\n\n");
													maximo(hidroeoli14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidroeolica en las Islas Canarias es:\n\n");
													minimo(hidroeoli14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidroeoli14);
													printf("\nEl promedio de generacion hidroeolica en las Islas Canarias es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidroeoli14);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidroeoli14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidroeoli14);
													printf("\nLa desviacion tipica de generacion hidroeolica en las Islas Canarias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(hidroeoli14);
													printf("\nLa varianza de generacion hidroeolica en las Islas Canarias es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidroeolica de mayor a menor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=hidroeoli14[i];
													}
													mayoramenor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidroeolica de menor a mayor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=hidroeoli14[i];
													}
													menoramayor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(hidroeoli14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en las Islas Canarias:\n\n");
									strcpy(valoresenergia14[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia14[0].MWh= eoli14[0];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Febrero");
									valoresenergia14[0].MWh= eoli14[1];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Marzo");
									valoresenergia14[0].MWh= eoli14[2];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Abril");
									valoresenergia14[0].MWh= eoli14[3];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Mayo");
									valoresenergia14[0].MWh= eoli14[4];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Junio");
									valoresenergia14[0].MWh= eoli14[5];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Julio");
									valoresenergia14[0].MWh= eoli14[6];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Agosto");
									valoresenergia14[0].MWh= eoli14[7];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Septiembre");
									valoresenergia14[0].MWh= eoli14[8];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Octubre");
									valoresenergia14[0].MWh= eoli14[9];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Noviembre");
									valoresenergia14[0].MWh= eoli14[10];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Diciembre");
									valoresenergia14[0].MWh= eoli14[11];
									printf("%s - %f MWh\t\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en las Islas Canarias es:\n\n");
													maximo(eoli14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en las Islas Canarias es:\n\n");
													minimo(eoli14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli14);
													printf("\nEl promedio de generacion eolica en las Islas Canarias es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli14);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli14);
													printf("\nLa desviacion tipica de generacion eolica en las Islas Canarias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(eoli14);
													printf("\nLa varianza de generacion eolica en las Islas Canarias es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de mayor a menor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=eoli14[i];
													}
													mayoramenor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de menor a mayor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=eoli14[i];
													}
													menoramayor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(eoli14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en las Islas Canarias:\n\n");
									strcpy(valoresenergia14[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia14[0].MWh= solar14[0];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Febrero");
									valoresenergia14[0].MWh= solar14[1];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Marzo");
									valoresenergia14[0].MWh= solar14[2];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Abril");
									valoresenergia14[0].MWh= solar14[3];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Mayo");
									valoresenergia14[0].MWh= solar14[4];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Junio");
									valoresenergia14[0].MWh= solar14[5];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Julio");
									valoresenergia14[0].MWh= solar14[6];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Agosto");
									valoresenergia14[0].MWh= solar14[7];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Septiembre");
									valoresenergia14[0].MWh= solar14[8];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Octubre");
									valoresenergia14[0].MWh= solar14[9];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Noviembre");
									valoresenergia14[0].MWh= solar14[10];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Diciembre");
									valoresenergia14[0].MWh= solar14[11];
									printf("%s - %f MWh\t\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en las Islas Canarias es:\n\n");
													maximo(solar14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en las Islas Canarias es:\n\n");
													minimo(solar14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar14);
													printf("\nEl promedio de generacion solar fotovoltaica en las Islas Canarias es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar14);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar14);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en las Islas Canarias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(solar14);
													printf("\nLa varianza de generacion solar fotovoltaica en las Islas Canarias es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=solar14[i];
													}
													mayoramenor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=solar14[i];
													}
													menoramayor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(solar14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion solar termica en las Islas Canarias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en las Islas Canarias:\n\n");
									strcpy(valoresenergia14[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia14[0].MWh= otras14[0];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Febrero");
									valoresenergia14[0].MWh= otras14[1];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Marzo");
									valoresenergia14[0].MWh= otras14[2];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Abril");
									valoresenergia14[0].MWh= otras14[3];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Mayo");
									valoresenergia14[0].MWh= otras14[4];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Junio");
									valoresenergia14[0].MWh= otras14[5];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Julio");
									valoresenergia14[0].MWh= otras14[6];
									printf("%s - %f MWh\t\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Agosto");
									valoresenergia14[0].MWh= otras14[7];
									printf("%s - %f MWh\t\n\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Septiembre");
									valoresenergia14[0].MWh= otras14[8];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Octubre");
									valoresenergia14[0].MWh= otras14[9];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Noviembre");
									valoresenergia14[0].MWh= otras14[10];
									printf("%s - %f MWh\t",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									strcpy(valoresenergia14[0].mes, "Diciembre");
									valoresenergia14[0].MWh= otras14[11];
									printf("%s - %f MWh\t\n",valoresenergia14[0].mes,valoresenergia14[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en las Islas Canarias es:\n\n");
													maximo(otras14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en las Islas Canarias es:\n\n");
													minimo(otras14);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras14);
													printf("\nEl promedio de generacion de otras renovables en las Islas Canarias es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras14);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras14);
													printf("\nLa desviacion tipica de generacion de otras renovables en las Islas Canarias es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(otras14);
													printf("\nLa varianza de generacion de otras renovables en las Islas Canarias es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de mayor a menor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=otras14[i];
													}
													mayoramenor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de menor a mayor en las Islas Canarias son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf14[i]=otras14[i];
													}
													menoramayor(rectf14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(otras14);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Islas Canarias.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==14);//La condici�n es solo para el caso 14
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									strcpy(valoresenergia15[0].mes, "\tJunio");
									valoresenergia15[0].MWh= hidrau15[5];
									printf("%s - %f MWh\t",valoresenergia15[0].mes,valoresenergia15[0].MWh);
									strcpy(valoresenergia15[0].mes, "\tJulio");
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en La Rioja es:\n\n");
													maximo(hidrau15);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en La Rioja es:\n\n");
													minimo(hidrau15);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau15);
													printf("\nLa desviacion tipica de generacion hidraulica en La Rioja es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en La Rioja.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en La Rioja:\n\n");
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
									strcpy(valoresenergia15[0].mes, "\tJunio");
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en La rioja es:\n\n");
													maximo(eoli15);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en La Rioja es:\n\n");
													minimo(eoli15);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli15);
													printf("\nLa desviacion tipica de generacion eolica en La Rioja es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									strcpy(valoresenergia15[0].mes, "\tJunio");
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en La Rioja es:\n\n");
													maximo(solar15);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en La Rioja es:\n\n");
													minimo(solar15);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar15);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en La Rioja es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en La Rioja.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en La Rioja es:\n\n");
													maximo(otras15);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en La Rioja es:\n\n");
													minimo(otras15);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras15);
													printf("\nLa desviacion tipica de generacion de otras renovables en La Rioja es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en La Rioja.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==15);//La condici�n es solo para el caso 1
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidraulica en Melilla.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Melilla.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion eolica en Melilla.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Melilla:\n\n");
									strcpy(valoresenergia16[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia16[0].MWh= solar16[0];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "\tFebrero");
									valoresenergia16[0].MWh= solar16[1];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Marzo");
									valoresenergia16[0].MWh= solar16[2];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "\tAbril");
									valoresenergia16[0].MWh= solar16[3];
									printf("%s - %f MWh\t\n\n",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Mayo");
									valoresenergia16[0].MWh= solar16[4];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "\tJunio");
									valoresenergia16[0].MWh= solar16[5];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Julio");
									valoresenergia16[0].MWh= solar16[6];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "\tAgosto");
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Melilla es:\n\n");
													maximo(solar16);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Melilla es:\n\n");
													minimo(solar16);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar16);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Melilla es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en Melilla.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==6);//La condici�n es solo para el caso 5
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de residuos renovable en Melilla:\n\n");
									strcpy(valoresenergia16[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia16[0].MWh= resid16[0];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "\tFebrero");
									valoresenergia16[0].MWh= resid16[1];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Marzo");
									valoresenergia16[0].MWh= resid16[2];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "\tAbril");
									valoresenergia16[0].MWh= resid16[3];
									printf("%s - %f MWh\t\n\n",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "Mayo");
									valoresenergia16[0].MWh= resid16[4];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "\tJunio");
									valoresenergia16[0].MWh= resid16[5];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "\tJulio");
									valoresenergia16[0].MWh= resid16[6];
									printf("%s - %f MWh\t",valoresenergia16[0].mes,valoresenergia16[0].MWh);
									strcpy(valoresenergia16[0].mes, "\tAgosto");
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de residuos renovables en Melilla es:\n\n");
													maximo(resid16);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de residuos renovables en Melilla es:\n\n");
													minimo(resid16);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(resid16);
													printf("\nLa desviacion tipca de residuos renovables en Melilla es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}		
					}
				}while(comunidad==16);//La condici�n es solo para el caso 1
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
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Murcia:\n\n");
									strcpy(valoresenergia17[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia17[0].MWh= hidrau17[0];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "\tFebrero");
									valoresenergia17[0].MWh= hidrau17[1];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Marzo");
									valoresenergia17[0].MWh= hidrau17[2];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "\tAbril");
									valoresenergia17[0].MWh= hidrau17[3];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Mayo");
									valoresenergia17[0].MWh= hidrau17[4];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "\tJunio");
									valoresenergia17[0].MWh= hidrau17[5];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "\tJulio");
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Murcia es:\n\n");
													maximo(hidrau17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Murcia es:\n\n");
													minimo(hidrau17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau17);
													printf("\nLa desviacion tipica de generacion hidraulica en Murcia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Murcia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									strcpy(valoresenergia17[0].mes, "\tJunio");
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Murcia es:\n\n");
													maximo(eoli17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Murcia es:\n\n");
													minimo(eoli17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli17);
													printf("\nLa desviacion tipica de generacion eolica en Murica es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Murcia es:\n\n");
													maximo(solar17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Murcia es:\n\n");
													minimo(solar17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar17);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Murcia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
						{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar termica en Murcia:\n\n");
									strcpy(valoresenergia17[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia17[0].MWh= termica17[0];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "\tFebrero");
									valoresenergia17[0].MWh= termica17[1];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Marzo");
									valoresenergia17[0].MWh= termica17[2];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "\tAbril");
									valoresenergia17[0].MWh= termica17[3];
									printf("%s - %f MWh\t\n\n",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "Mayo");
									valoresenergia17[0].MWh= termica17[4];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "\tJunio");
									valoresenergia17[0].MWh= termica17[5];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "\tJulio");
									valoresenergia17[0].MWh= termica17[6];
									printf("%s - %f MWh\t",valoresenergia17[0].mes,valoresenergia17[0].MWh);
									strcpy(valoresenergia17[0].mes, "\tAgosto");
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
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar termica en Murcia es:\n\n");
													maximo(termica17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar termica en Murcia es:\n\n");
													minimo(termica17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(termica17);
													printf("\nLa desviacion tipica de generacion solar termica en Murccia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
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
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Murcia es:\n\n");
													maximo(otras17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Murcia es:\n\n");
													minimo(otras17);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras17);
													printf("\nLa desviacion tipica de generacion de otras renovables en Murcia es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
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
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Murcia.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==17);//La condici�n es solo para el caso 1
			break;
		}
		case 18://Navarra
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Navarra:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Navarra:\n\n");
									strcpy(valoresenergia18[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia18[0].MWh= hidrau18[0];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Febrero");
									valoresenergia18[0].MWh= hidrau18[1];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Marzo");
									valoresenergia18[0].MWh= hidrau18[2];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Abril");
									valoresenergia18[0].MWh= hidrau18[3];
									printf("%s - %f MWh\t\n\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Mayo");
									valoresenergia18[0].MWh= hidrau18[4];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "\tJunio");
									valoresenergia18[0].MWh= hidrau18[5];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Julio");
									valoresenergia18[0].MWh= hidrau18[6];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Agosto");
									valoresenergia18[0].MWh= hidrau18[7];
									printf("%s - %f MWh\t\n\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Septiembre");
									valoresenergia2[0].MWh= hidrau18[8];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Octubre");
									valoresenergia18[0].MWh= hidrau18[9];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Noviembre");
									valoresenergia18[0].MWh= hidrau18[10];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Diciembre");
									valoresenergia18[0].MWh= hidrau18[11];
									printf("%s - %f MWh\t\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Navarra es:\n\n");
													maximo(hidrau18);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Navarra es:\n\n");
													minimo(hidrau18);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidrau18);
													printf("\nEl promedio de generacion hidraulica en Navarra es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidrau18);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidrau18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau18);
													printf("\nLa desviacion tipica de generacion hidraulica en Navarra es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(hidrau18);
													printf("\nLa varianza de generacion hidraulica en Navarra es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de mayor a menor en Navarra son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf18[i]=hidrau18[i];
													}
													mayoramenor(rectf18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de menor a mayor en Navarra son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf18[i]=hidrau18[i];
													}
													menoramayor(rectf18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(hidrau18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Navarra.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en Navarra:\n\n");
									strcpy(valoresenergia18[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia18[0].MWh= eoli18[0];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Febrero");
									valoresenergia18[0].MWh= eoli18[1];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Marzo");
									valoresenergia18[0].MWh= eoli18[2];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Abril");
									valoresenergia18[0].MWh= eoli18[3];
									printf("%s - %f MWh\t\n\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Mayo");
									valoresenergia18[0].MWh= eoli18[4];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Junio");
									valoresenergia18[0].MWh= eoli18[5];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Julio");
									valoresenergia18[0].MWh= eoli18[6];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Agosto");
									valoresenergia18[0].MWh= eoli18[7];
									printf("%s - %f MWh\t\n\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Septiembre");
									valoresenergia18[0].MWh= eoli18[8];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Octubre");
									valoresenergia18[0].MWh= eoli18[9];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Noviembre");
									valoresenergia18[0].MWh= eoli18[10];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Diciembre");
									valoresenergia18[0].MWh= eoli18[11];
									printf("%s - %f MWh\t\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Navarra es:\n\n");
													maximo(eoli18);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Navarra es:\n\n");
													minimo(eoli18);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli18);
													printf("\nEl promedio de generacion eolica en Navarra es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli18);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli18);
													printf("\nLa desviacion tipica de generacion eolica en Navarra es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(eoli18);
													printf("\nLa varianza de generacion eolica en Navarra es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de mayor a menor en Navarra son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf18[i]=eoli18[i];
													}
													mayoramenor(rectf18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de menor a mayor en Navarra son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf18[i]=eoli18[i];
													}
													menoramayor(rectf18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(eoli18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Navarra:\n\n");
									strcpy(valoresenergia18[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia18[0].MWh= solar18[0];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Febrero");
									valoresenergia18[0].MWh= solar18[1];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Marzo");
									valoresenergia18[0].MWh= solar18[2];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Abril");
									valoresenergia18[0].MWh= solar18[3];
									printf("%s - %f MWh\t\n\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Mayo");
									valoresenergia18[0].MWh= solar18[4];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "\tJunio");
									valoresenergia18[0].MWh= solar18[5];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Julio");
									valoresenergia18[0].MWh= solar18[6];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Agosto");
									valoresenergia18[0].MWh= solar18[7];
									printf("%s - %f MWh\t\n\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Septiembre");
									valoresenergia18[0].MWh= solar18[8];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Octubre");
									valoresenergia18[0].MWh= solar18[9];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Noviembre");
									valoresenergia18[0].MWh= solar18[10];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Diciembre");
									valoresenergia18[0].MWh= solar18[11];
									printf("%s - %f MWh\t\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Navarra es:\n\n");
													maximo(solar18);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Navarra es:\n\n");
													minimo(solar18);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar18);
													printf("\nEl promedio de generacion solar fotovoltaica en Navarra es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar18);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar18);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Navarra es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(solar18);
													printf("\nLa varianza de generacion solar fotovoltaica en Navarra es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Navarra son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf18[i]=solar18[i];
													}
													mayoramenor(rectf18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Navarra son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf18[i]=solar18[i];
													}
													menoramayor(rectf18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(solar18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en Navarra.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Navarra:\n\n");
									strcpy(valoresenergia18[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia18[0].MWh= otras18[0];
									printf("%s - %f MWh\t\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Febrero");
									valoresenergia18[0].MWh= otras18[1];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Marzo");
									valoresenergia18[0].MWh= otras18[2];
									printf("%s - %f MWh\t\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Abril");
									valoresenergia18[0].MWh= otras18[3];
									printf("%s - %f MWh\t\n\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Mayo");
									valoresenergia18[0].MWh= otras18[4];
									printf("%s - %f MWh\t\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "\tJunio");
									valoresenergia18[0].MWh= otras18[5];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Julio");
									valoresenergia18[0].MWh= otras18[6];
									printf("%s - %f MWh\t\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Agosto");
									valoresenergia18[0].MWh= otras18[7];
									printf("%s - %f MWh\t\n\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Septiembre");
									valoresenergia18[0].MWh= otras18[8];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "\tOctubre");
									valoresenergia18[0].MWh= otras18[9];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "Noviembre");
									valoresenergia18[0].MWh= otras18[10];
									printf("%s - %f MWh\t",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									strcpy(valoresenergia18[0].mes, "\tDiciembre");
									valoresenergia18[0].MWh= otras18[11];
									printf("%s - %f MWh\t\n",valoresenergia18[0].mes,valoresenergia18[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Navarra es:\n\n");
													maximo(otras18);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Navarra es:\n\n");
													minimo(otras18);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras18);
													printf("\nEl promedio de generacion de otras renovables en Navarra es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras18);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras18);
													printf("\nLa desviacion tipica de generacion de otras renovables en Navarra es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(otras18);
													printf("\nLa varianza de generacion de otras renovables en Navarra es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de mayor a menor en Navarra son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf18[i]=otras18[i];
													}
													mayoramenor(rectf18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de menor a mayor en Navarra son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf18[i]=otras18[i];
													}
													menoramayor(rectf18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(otras18);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nNo hay datos de generacion de residuos renovables en Navarra.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==7);//La condici�n es solo para el caso 7
							break;
							}		
					}
				}while(comunidad==18);//La condici�n es solo para el caso 1
			break;
		}
		case 19://Pais Vasco
			{	
				do//Do-while para mantener el texto de las renovables 
				{
					system("cls");//Libera la pantalla 
					printf("\nAhora elige una energia renovable de Pais Vasco:\n\n");
					printf("1.-Hidraulica\n2.-Hidroeolica\n3.-Eolica\n4.-Solar fotovoltaica\n5.-Solar termica\n6.-Otras renovables\n7.-Residuos renovables\n");
					printf("\nPulse 0 para volver(<----)\n");
					scanf(" %i",&renovable);//Se escoge un caracter ahora puesto que tambi�n se quiere volver hacia atr�s
					if(renovable==0)//Para poder volver hacia atr�s
					{
						system("cls");
						break;
					}
					switch(renovable)//Para cada renovable un n�mero
					{
						case 1://Hidraulica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion hidraulica en Pais Vasco:\n\n");
									strcpy(valoresenergia19[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia19[0].MWh= hidrau19[0];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Febrero");
									valoresenergia19[0].MWh= hidrau19[1];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Marzo");
									valoresenergia19[0].MWh= hidrau19[2];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Abril");
									valoresenergia19[0].MWh= hidrau19[3];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Mayo");
									valoresenergia19[0].MWh= hidrau19[4];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "\t Junio");
									valoresenergia19[0].MWh= hidrau19[5];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Julio");
									valoresenergia19[0].MWh= hidrau19[6];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Agosto");
									valoresenergia19[0].MWh= hidrau19[7];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Septiembre");
									valoresenergia19[0].MWh= hidrau19[8];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Octubre");
									valoresenergia19[0].MWh= hidrau19[9];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Noviembre");
									valoresenergia19[0].MWh= hidrau19[10];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Diciembre");
									valoresenergia19[0].MWh= hidrau19[11];
									printf("%s - %f MWh\t\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion hidraulica en Pais Vasco es:\n\n");
													maximo(hidrau19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion hidraulica en Pais Vasco es:\n\n");
													minimo(hidrau19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(hidrau19);
													printf("\nEl promedio de generacion hidraulica en Pais Vasco es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(hidrau19);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(hidrau19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(hidrau19);
													printf("\nLa desviacion tipica de generacion hidraulica en Pais Vasco es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(hidrau19);
													printf("\nLa varianza de generacion hidraulica en Pais Vasco es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de mayor a menor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=hidrau19[i];
													}
													mayoramenor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion hidraulica de menor a mayor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=hidrau19[i];
													}
													menoramayor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(hidrau19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==1);//La condici�n es solo para el caso 1
							break;
							}
						case 2://Hidroe�lica
							{
								do//Do-while para mantener el texto
								{
									system("cls");
									printf("\nNo hay datos de generacion hidroeolica en Pais Vasco.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==2);//La condici�n es solo para el caso 2
							break;
							}
						case 3://E�lica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion eolica en Pais Vasco:\n\n");
									strcpy(valoresenergia19[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia19[0].MWh= eoli19[0];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Febrero");
									valoresenergia19[0].MWh= eoli19[1];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Marzo");
									valoresenergia19[0].MWh= eoli19[2];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Abril");
									valoresenergia19[0].MWh= eoli19[3];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Mayo");
									valoresenergia19[0].MWh= eoli19[4];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "\t Junio");
									valoresenergia19[0].MWh= eoli19[5];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Julio");
									valoresenergia19[0].MWh= eoli19[6];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Agosto");
									valoresenergia19[0].MWh= eoli19[7];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Septiembre");
									valoresenergia19[0].MWh= eoli19[8];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Octubre");
									valoresenergia19[0].MWh= eoli19[9];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Noviembre");
									valoresenergia19[0].MWh= eoli19[10];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Diciembre");
									valoresenergia19[0].MWh= eoli19[11];
									printf("%s - %f MWh\t\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion eolica en Pais Vasco es:\n\n");
													maximo(eoli19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion eolica en Pais Vasco es:\n\n");
													minimo(eoli19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(eoli19);
													printf("\nEl promedio de generacion eolica en Pais Vasco es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(eoli19);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(eoli19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(eoli19);
													printf("\nLa desviacion tipica de generacion eolica en Pais Vasco es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(eoli19);
													printf("\nLa varianza de generacion eolica en Pais Vasco es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de mayor a menor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=eoli19[i];
													}
													mayoramenor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion eolica de menor a mayor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=eoli19[i];
													}
													menoramayor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(eoli19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==3);//La condici�n es solo para el caso 3
							break;
							}
						case 4://Solar fotovoltaica
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion solar fotovoltaica en Pais Vasco:\n\n");
									strcpy(valoresenergia19[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia19[0].MWh= solar19[0];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "\tFebrero\t");
									valoresenergia19[0].MWh= solar19[1];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Marzo\t");
									valoresenergia19[0].MWh= solar19[2];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Abril");
									valoresenergia19[0].MWh= solar19[3];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Mayo");
									valoresenergia19[0].MWh= solar19[4];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "\tJunio\t");
									valoresenergia19[0].MWh= solar19[5];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Julio");
									valoresenergia19[0].MWh= solar19[6];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "\tAgosto\t");
									valoresenergia19[0].MWh= solar19[7];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Septiembre");
									valoresenergia19[0].MWh= solar19[8];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Octubre");
									valoresenergia19[0].MWh= solar19[9];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Noviembre");
									valoresenergia19[0].MWh= solar19[10];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Diciembre");
									valoresenergia19[0].MWh= solar19[11];
									printf("%s - %f MWh\t\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion solar fotovoltaica en Pais Vasco es:\n\n");
													maximo(solar19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion solar fotovoltaica en Pais Vasco es:\n\n");
													minimo(solar19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(solar19);
													printf("\nEl promedio de generacion solar fotovoltaica en Pais Vasco es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(solar19);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(solar19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(solar19);
													printf("\nLa desviacion tipca de generacion solar fotovoltaica en Pais Vasco es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(solar19);
													printf("\nLa varianza de generacion solar fotovoltaica en Pais Vasco es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de generacion solar fotovoltaica de mayor a menor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=solar19[i];
													}
													mayoramenor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion solar fotovoltaica de menor a mayor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=solar19[i];
													}
													menoramayor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(solar19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}
						case 5://Solar t�rmica
							{
								do//Do-while para mantener el texto 
								{
									system("cls");
									printf("\nNo hay datos de generacion de solar termica en Pais Vasco.\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
								}while(renovable==5);//La condici�n es solo para el caso 5
							break;
							}
						case 6://Otras renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de generacion de otras renovables en Pais Vasco:\n\n");
									strcpy(valoresenergia19[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia19[0].MWh= otras19[0];
									printf("%s - %f MWh\t\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Febrero");
									valoresenergia19[0].MWh= otras19[1];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Marzo");
									valoresenergia19[0].MWh= otras19[2];
									printf("%s - %f MWh\t\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Abril");
									valoresenergia19[0].MWh= otras19[3];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Mayo");
									valoresenergia19[0].MWh= otras19[4];
									printf("%s - %f MWh\t\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Junio");
									valoresenergia19[0].MWh= otras19[5];
									printf("%s - %f MWh\t\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Julio");
									valoresenergia19[0].MWh= otras19[6];
									printf("%s - %f MWh\t\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Agosto");
									valoresenergia19[0].MWh= otras19[7];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Septiembre");
									valoresenergia19[0].MWh= otras19[8];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Octubre");
									valoresenergia19[0].MWh= otras19[9];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Noviembre");
									valoresenergia19[0].MWh= otras19[10];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Diciembre");
									valoresenergia19[0].MWh= otras19[11];
									printf("%s - %f MWh\t\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de generacion de otras renovables en Pais Vasco es:\n\n");
													maximo(otras19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de generacion de otras renovables en Pais Vasco es:\n\n");
													minimo(otras19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(otras19);
													printf("\nEl promedio de generacion de otras renovables en Pais Vasco es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(otras19);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(otras19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(otras19);
													printf("\nLa desviacion tipica de generacion de otras renovables en Pais Vasco es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(otras19);
													printf("\nLa varianza de generacion de otras renovables en Pais Vasco es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de mayor a menor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=otras19[i];
													}
													mayoramenor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de generacion de otras renovables de menor a mayor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=otras19[i];
													}
													menoramayor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(otras19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==6);//La condici�n es solo para el caso 6
							break;
							}
						case 7://Residuos renovables
							{
								do//Do-while para mantener el texto de cada funci�n
								{
									system("cls");
									printf("\nA continuacion se muestran los datos de residuos renovable en Pais Vasco:\n\n");
									strcpy(valoresenergia19[0].mes, "Enero"); // Imprimimos los datos utilizando el vector de la estructura
									valoresenergia19[0].MWh= resid19[0];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Febrero");
									valoresenergia19[0].MWh= resid19[1];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Marzo");
									valoresenergia19[0].MWh= resid19[2];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Abril");
									valoresenergia19[0].MWh= resid19[3];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Mayo");
									valoresenergia19[0].MWh= resid19[4];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "\tJunio");
									valoresenergia19[0].MWh= resid19[5];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Julio");
									valoresenergia19[0].MWh= resid19[6];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Agosto");
									valoresenergia16[0].MWh= resid19[7];
									printf("%s - %f MWh\t\n\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Septiembre");
									valoresenergia19[0].MWh= resid19[8];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Octubre");
									valoresenergia19[0].MWh= resid19[9];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Noviembre");
									valoresenergia19[0].MWh= resid19[10];
									printf("%s - %f MWh\t",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									strcpy(valoresenergia19[0].mes, "Diciembre");
									valoresenergia19[0].MWh= resid19[11];
									printf("%s - %f MWh\t\n",valoresenergia19[0].mes,valoresenergia19[0].MWh);
									printf("\n\nElige la operacion que quieres hacer:\n\n");
									printf("1.-Maximo\t\t\t 2.-Minimo\t\t 3.-Promedio\t\t\t\t 4.-Mwh a euro\t\t\t\t 5.-MWh a GWh\n\n");
									printf("6.-Desviacion tipica\t\t 7.-Varianza\t\t 8.-Ordenar de mayor a menor\t\t 9.-Ordenar de menor a mayor\t\t 10.-MWh a MJ\n");
									printf("\nPulse 0 para volver(<----)\n");
									scanf("  %i",&funciones);
									if(funciones==0)//Para poder volver hacia atr�s
									{
										system("cls");
										break;
									}
									switch(funciones)//Para cada funci�n un n�mero
										{											
											case 1://M�ximo de los datos.
											{
												do//Do-while para mantener el texto de m�ximo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl maximo de residuos renovables en Pais Vasco es:\n\n");
													maximo(resid19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==1);//La condici�n es solo para el caso 1
												break;
											}
											case 2://M�nimo de los datos.
											{
												do//Do-while para mantener el texto de m�nimo y que no se acabe el programa
												{
													system("cls");
													printf("\nEl minimo de residuos renovables en Pais Vasco es:\n\n");
													minimo(resid19);
													printf("\n\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==2);//La condici�n es solo para el caso 2
												break;
											}
											case 3://Promedio de los datos.
											{
												do//Do-while para mantener el texto de promedio y que no se acabe el programa
												{
													system("cls");
													prom1= promedio(resid19);
													printf("\nEl promedio de residuos renovables en Pais Vasco es %f MWh.\n",prom1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==3);//La condici�n es solo para el caso 3
												break;
											}
											case 4://MWh a euro
											{
												do //Do-while para mantener el texto de MWh a euro y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaeuro(resid19);
													printf("Pulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==4);//La condici�n es solo para el caso 4
												break;	
											}
											case 5://MWh a GWh
											{
												do // Do-while para mantener el texto de MWh a GWh y que no se acabe el programa
												{
													system("cls");
													printf("\n");
													MWhaGWh(resid19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==5);//La condici�n es solo para el caso 5
												break;
											}
											case 6://Desviaci�n t�pica
											{
												do//Do-while para mantener el texto de desviaci�n
												{
													system("cls");
													desv1= desviacion(resid19);
													printf("\nLa desviacion tipca de residuos renovables en Pais Vasco es %.2f MWh.\n",desv1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==6);//La condici�n es solo para el caso 6
												break;
											}
											case 7://Varianza
											{
												do // Do-while para mantener texto de varianza
												{
													system("cls");
													vari1=varianza(resid19);
													printf("\nLa varianza de residuos renovables en Pais Vasco es %.2f MWh*m^2.\n",vari1);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==7);//La condici�n es solo para el caso 7
												break;
											}
											case 8://Mayor a menor
											{
												do // Do-while para mantener el texto de mayor a menor
												{
													system("cls");
													printf("\n");
													printf("Los valores de residuos renovables de mayor a menor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=resid19[i];
													}
													mayoramenor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														
														break;
													}
												}while(funciones==8);//La condici�n es solo para el caso 8
												break;
											}
											case 9://Menor a mayor
											{
												do // Do-while para mantener el texto de menor a mayor
												{
													system("cls");
													printf("\n");
													printf("Los datos de residuos renovables de menor a mayor en Pais Vasco son:\n\n");
													for(i=0;i<12;i++)
													{
														rectf19[i]=resid19[i];
													}
													menoramayor(rectf19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==9);//La condici�n es solo para el caso 9
												break;
											}
											case 10://MWh a MJ
											{
												do // Do-while para mantener el texto de MJ
												{
													system("cls");
													MWhaMJ(resid19);
													printf("\nPulse 0 para volver(<----)\n");
													scanf("   %i",&atras);
													if(atras==0)//Para volver hacia atr�s
													{
														system("cls");
														break;
													}
												}while(funciones==10);//La condici�n es solo para el caso 10
												break;
											}
										}
								}while(renovable==4);//La condici�n es solo para el caso 4
							break;
							}		
					}
				}while(comunidad==19);//La condici�n es solo para el caso 1
			break;
		}		
			
	}
	}while(comunidad>=1 && comunidad<=19);//Hago while entre 1 y 19 que son las comunidades aut�nomas
	return 0;
}
void maximo(float vector[11])//Funci�n que permite al usuario conocer el maximo valor de energia generada
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
float promedio(float vector[11])//Funci�n que permite al usuario conocer el valor promedio de energia generada
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
void minimo(float vector[11])//Funci�n que permite al usuario conocer el minimo valor de energia generada
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
void MWhaGWh(float vector[11]) // Funcion que permite al usuario conocer la energ�a generada en cada mes en GWh
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
float desviacion(float vector[11])//Funcion que permite hacer la desviaci�n t�pica
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
