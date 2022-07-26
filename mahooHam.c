/*                                    
   mahooHam.c

  	amateur radio software

   mahooHam Copyright (C) <2014-2022>  <Matthias Holl>

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>
 
 gcc -o mahooHam mahooHam.c -lm

 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define c 300000000
#define cc 300
#define pi 3.14159265359
#define vv 0.95

int main (void) {
 int menu;
 float i,v,r,us,is,f,L;
 float hertz,lamda,ccc,henries,farads,ohms;
 double ff,cccc;

 printf("\n");
 printf("This is free software! GNU General Public License \n");
 printf("This program comes with ABSOLUTELY NO WARRANTY \n");
 printf("mahooHam Copyright (C) 2022 by Matthias Holl \n");
 printf("\n"); 
 printf(" Ohm's law:\n");
 printf(" -1- electric current(I) \n"); 
 printf(" -2- voltage(V) \n"); 
 printf(" -3- resistance(R) \n");
 printf("\n");
 printf(" DC Electric Power:\n");
 printf(" -4- power(P) \n");
 printf("\n");
 printf(" Wavelength and Frequency:\n");
 printf(" -5- wavelength(lamda) \n");
 printf(" -6- frequency(f) \n");
 printf(" -7- f/MHz \n");
 printf("\n");
 printf(" Peak voltage / Peak current:\n");
 printf(" -8- peak voltage(Vo) \n");
 printf(" -9- peak current(Io) \n");
 printf("\n");
 printf(" Inductive reactance / Capacitive reactance:\n");
 printf(" -10- inductive reactance(XL)\n");
 printf(" -11- capacitive reactance(XC)\n");
 printf("\n");
 printf(" Resonant circuit:\n");
 printf(" -12- resonant frequency(f)\n");
 printf("\n");
 printf(" Low-cut filter / High-pass filter:\n");
 printf(" -13- 'LC-pass' cut-off frequency(f)\n");
 printf(" -14- 'RC-pass' cut-off frequency(f)\n");
 printf("\n");
 printf(" Antenna design:\n");
 printf(" -15- 1/2 lamda groundplane\n");
 printf(" -16- 1/2 lamda dipole\n");
 printf("\n");

 printf("your choice:");
 scanf("%d",&menu);
 
 if (menu ==1) {
   
  printf("electric current(I)=voltage(V)/resistance(R) I=V/R\n");
  printf("V in volts=");
  scanf("%f",&v);
  printf("R in ohms=");
  scanf("%f",&r);
  printf("electric curren(I) in amperes= %f\n",v/r);
  return EXIT_SUCCESS;
  }
  if (menu ==2) {
   
  printf("voltage(V)=resistance(R)*electric current(I) V=R*I\n");
  printf("R in ohms=");
  scanf("%f",&r);
  printf("I in amperes=");
  scanf("%f",&i);
  printf("voltage(V) in volts= %f\n",r*i);
  return EXIT_SUCCESS;
  }
  if (menu ==3) {
   
  printf("resistance(R)=voltage(V)/electric current(I) R=V/I\n");
  printf("V in volts=");
  scanf("%f",&v);
  printf("I in amperes=");
  scanf("%f",&i);
  printf("resistance(R) in ohms= %f\n",v/i);
  return EXIT_SUCCESS;
  }
  if (menu ==4) {
   
  printf("power(P)=voltage(V)*current(I) P=V*I\n");
  printf("V in volts=");
  scanf("%f",&v);
  printf("I in amperes=");
  scanf("%f",&i);
  printf("power(P) in watts= %f\n",v*i);
   return EXIT_SUCCESS;
  }
  if (menu ==5) {
   
  printf("wavelength(lamda)=c/frequency(f) lamda=c/f\n");
  printf("f in hertz=");
  scanf("%f",&hertz);
  printf("wavelength(lamda)= %f\n",c/hertz);
   return EXIT_SUCCESS;
  }
  if (menu ==6) {
   
  printf("frequency(f)=c/wavelength(lamda) f=c/lamda\n");
  printf("wavelength(lamda)=");
  scanf("%f",&lamda);
  printf("frequency(f) in hertz= %f\n",c/lamda);
   return EXIT_SUCCESS;
  }
   if (menu ==7) {
   
  printf("f/MHz=c/wavelength(lamda) f=c/lamda\n");
  printf("wavelength(lamda)=");
  scanf("%f",&lamda);
  printf("frequency(f) in MHz= %f\n",cc/lamda);
   return EXIT_SUCCESS;
  }
  if (menu ==8) {
   
  printf("peak voltage(Vo) Vo=1/sqrt(2)*Us\n");
  printf("Us(peak value amplitude)=");
  scanf("%f",&us);
  printf("peak voltage(Vo) in volts= %f\n",(1/sqrt(2))*us);
   return EXIT_SUCCESS;
  }
  
if (menu ==9) {
   
  printf("peak current(Io) Io=Is/sqrt(2)\n");
  printf("Is peak current in amperes=");
  scanf("%f",&is);
  printf("peak current(Io) in amperes= %f\n",is/sqrt(2));
   return EXIT_SUCCESS;
  }
  if (menu ==10) {
   
  printf("inductive reactance(XL)=2*pi*frequency(f)*inductance(L) XL=2*pi*f*L\n");
  printf("f in hertz=");
  scanf("%f",&f);
  printf("L in henries=");
  scanf("%f",&L);
  printf("inductive reactance(XL) in ohms= %f\n",2*pi*f*L);
   return EXIT_SUCCESS;
  }
   if (menu ==11) {
   
  printf("capacitive reactance(XC)=1/2*pi*frequency(f)*capacitance(C) XC=1/(2*pi*f*C)\n");
  printf("f in hertz=");
  scanf("%lf",&ff);
  printf("C in farads=");
  scanf("%lf",&cccc);
  printf("capacitive reactance(XC) in ohms= %f\n",1/(2*pi*ff*cccc));
   return EXIT_SUCCESS;
  }
   if (menu ==12) {
   
  printf("resonant frequency(f)=1/2*pi*sqrt(inductance(L)*capacitance(C)) f=1/(2*pi*sqrt(L*C))\n");
  printf("L in henries=");
  scanf("%f",&henries);
  printf("C in farads=");
  scanf("%f",&farads);
  printf("resonant frequency(f) in hertz= %f\n",1/(2*pi*sqrt(henries*farads)));
   return EXIT_SUCCESS;
  }
  if (menu ==13) {
   
  printf("cut-off frequency(f)=1/sqrt(inductance(L)*capacitance(C)) f=1/(sqrt(L*C))\n");
  printf("L in henries=");
  scanf("%f",&henries);
  printf("C in farads=");
  scanf("%f",&farads);
  printf("cut-off frequency(f) in hertz= %f\n",1/sqrt(henries*farads));
   return EXIT_SUCCESS;
  }
  
  if (menu ==14) {
   
  printf("cut-off frequency(f)=1/resistance(R)*capacitance(C) f=1/R*C\n");
  printf("R in ohms=");
  scanf("%f",&ohms);
  printf("C in farads=");
  scanf("%f",&farads);
  printf("cut-off frequency(f) in hertz= %f\n",1/(ohms*farads));
   return EXIT_SUCCESS;
  }
  if (menu ==15) {
   
  printf("1/2 lamda groundplane \n");
  printf("wavelength(lamda)=");
  scanf("%f",&lamda);
  printf("groundplane length with velocity factor= %f\n",(lamda/2)*vv);
  printf("groundplane length= %f\n",lamda/2);
   return EXIT_SUCCESS;
  }

   if (menu ==16) {
   
  printf("1/2 lamda dipole \n");
  printf("wavelength(lamda)=");
  scanf("%f",&lamda);
  printf("dipole length with velocity factor= %f\n",(lamda/2)*vv);
  printf("dipole length= %f\n",lamda/2);
   return EXIT_SUCCESS;
  }
   
 return EXIT_SUCCESS;
}
