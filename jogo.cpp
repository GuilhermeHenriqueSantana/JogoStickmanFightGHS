#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.c>
#include<Windows.h>

int infinito = 0;
char nomePer[6]="Carl";

void opcoesMenu();
int principal();

void nome(int x);
void per(int x, int y, int c);
void per2(int c);
void quad(int x, int y);
void quatre();
void escolPer();
void controles();
void frame1(int x,int y);
void frame2(int x,int y);
void frame3(int x,int y);
void frame4(int x,int y);
void frame5(int x,int y);
void frame6(int x,int y);
void frame7(int x,int y);
void jogo(int nomecor);
void setinha(int x, int y);

void setinha(int x, int y){
    gotoxy(x-1,y);printf(">");
}
void opcoesMenu(){
    gotoxy(33,15);printf(" jogar");
    gotoxy(33,16);printf(" controles");
    gotoxy(33,17);printf(" instrucoes");
    gotoxy(33,18);printf(" infinito: %d",infinito);//atualizar
    gotoxy(33,19);printf(" sair");
    gotoxy(1,24);printf("Produzido por Guilherme Henrique Santana");
    
}
void nome(int x){     
     switch (x){
            case 1: strcpy(nomePer,"Carl"); break;
            case 2: strcpy(nomePer,"Rob"); break;
            case 3: strcpy(nomePer,"Bob"); break;
            case 4: strcpy(nomePer,"Andy"); break;
            case 5: strcpy(nomePer,"Ana"); break;
            case 6: strcpy(nomePer,"Beto"); break;
            case 7: strcpy(nomePer,"Tony"); break;
     }
      
} 
void per(int x, int y, int c){
    textcolor(c);//2
    gotoxy(x,y);  printf(" ___ ");
    gotoxy(x,y+1);printf("/   \\");  
    gotoxy(x,y+2);printf("\\___/");  
    gotoxy(x,y+3);printf(" | | ");  
    textcolor(8);//2                                                              
}
void per2(int c){
    textcolor(c); 
    gotoxy(1,7); printf("      ___");
    gotoxy(1,8); printf("     /   \\");
    gotoxy(1,9); printf("     \\___/");
    gotoxy(1,10); printf("   __  _  __ ");
    gotoxy(1,11); printf("  / / | | \\ \\");
    gotoxy(1,12); printf(" / /  | |  \\ \\");
    gotoxy(1,13); printf("/_/   | |   \\_\\");
    gotoxy(1,14); printf("      |_|       ");
    gotoxy(1,15); printf("    __   __ ");
    gotoxy(1,16);printf("   / /   \\ \\");
    gotoxy(1,17);printf("  / /     \\ \\");
    gotoxy(1,18);printf(" /_/       \\_\\");
    textcolor(8);
}
void quad(int x, int y){      
    int a=x;
    int b=y;
    int c=1;
    for (x=a;x<a+9;x++){
        gotoxy(x+1,y);printf("_");
        gotoxy(x+1,y+5);printf("_");
        if (c<6){
            gotoxy(a,y+c);printf("|");
            gotoxy(a+10,y+c);printf("|");
            c++;
        }                                
    }   
} 
void quatre(){
    textcolor(15); 
    gotoxy(1,3);printf("ESCOLHA SEU PERSONAGEM");
    textcolor(8);//2 
    quad(17,7);
               per(20,8,1);  
    quad(28,7);
               per(31,8,2);  
    quad(39,7);
               per(42,8,3);  
    quad(50,7); 
                per(53,8,4);                         
    quad(22,13);
                per(25,14,5);  
    quad(33,13);
                per(36,14,6);  
    quad(44,13);
                per(47,14,7);       
} 






void escolPer(){
     int numnome=1;
     int tec;
     int pos1=1;
     int pos2=1;
     quatre();
     textcolor(2);//2
     quad(17,7);
     per2(1);
     gotoxy(6,20);printf("%s",nomePer);  
     do{
         tec=getch();
         if (tec!=-32){
            
            if (tec == 'w' || tec == 'W'){
               tec = 72;
            }
            if (tec == 's' || tec == 'S'){
               tec = 80;
            }
            if (tec == 'a' || tec == 'A'){
               tec = 75;
            }
            if (tec == 'd' || tec == 'D'){
               tec = 77;
            }
            switch (tec){
                   case 72:pos1--; break;//SETA PRA CIMA 72
                   case 80:pos1++; break;//SETA PRA BAIXO 80
                   case 75:pos2--; break;//SETA PRA ESQUERDA 75
                   case 77:pos2++; break;//SETA PRA DIREITA    77  
            }
         }                
         textcolor(8);//2
         quatre(); 
         textcolor(2);//2  
         if (pos1<1){
            pos1=1;
         }  
         if (pos1>2){
            pos1=2;
         }
         if (pos2<1){
            pos2=1;
         }
         if (pos1==1){
            if (pos2>4){
               pos2=4;
            }        
         }else{
               if (pos2>3){
                  pos2=3;
               }
         }                       
         switch (pos1){                   
                case 1:
                     switch (pos2){                           
                            case 1:  
                                 quad(17,7);
                                 per2(1); 
                                 numnome=1;                                                                                       
                                 break;                                 
                            case 2:
                                 quad(28,7);
                                 per2(2);
                                 numnome=2; 
                                 break;
                            case 3:
                                 quad(39,7);
                                 per2(3);
                                 numnome=3; 
                                 break;
                            case 4:
                                 quad(50,7);
                                 per2(4);
                                 numnome=4;  
                                 break;
                     }
                     break;
                case 2:
                     switch (pos2){
                            case 1:
                                 quad(22,13);
                                 per2(5);
                                 numnome=5; 
                                 break;
                            case 2:
                                 quad(33,13);
                                 per2(6);
                                 numnome=6; 
                                 break;
                            case 3:
                                 quad(44,13);
                                 per2(7 );
                                 numnome=7; 
                                 break;
                     }
                     break;         
         } 
         nome(numnome);  
         gotoxy(6,20);printf("      ");   
         gotoxy(6,20);printf("%s",nomePer);      
         if (tec==13){
            system("cls");           
            jogo(numnome);
         }
     }
     while(tec!=27);
     principal();
} 
int ypulo,cair=1,cair2=1,cair3=1;;
int x=2,y=21;

int xo1=50,yo1=21;

int ypuloini;
int puloini;

int xo2=40,yo2=11;

int ypuloini2;
int puloini2;


void fisica(int xf,int yf,int tf){
     xf=xf-3;
     yf=yf-3;
     tf=tf+1+xf;
     if (x>=xf && x<=tf){
        if (y==yf) {
           ypulo=yf;
           cair=0;
        }
     }
}

void fisicaini (int xf,int yf,int tf){
              xf=xf-3;
              yf=yf-3;
              tf=tf+1+xf;
              if (xo1>=xf && xo1<=tf){
                 if (yo1==yf) {
                    ypuloini=yf;
                    cair2=0;
                 }
              }
}

void fisicaini2 (int xf,int yf,int tf){
              xf=xf-3;
              yf=yf-3;
              tf=tf+1+xf;
              if (xo2>=xf && xo2<=tf){
                 if (yo2==yf) {
                    ypuloini2=yf;
                    cair3=0;
                 }
              }
}
 
void boss1(int x,int y){
    gotoxy(x,y);     printf("      ___ ");          
    gotoxy(x,y+1);   printf("     /   \\");        
    gotoxy(x,y+2);   printf("     \\___/"); 
    gotoxy(x,y+3);   printf("   __  _  __");         
    gotoxy(x,y+4);   printf("  / / | | \\ \\");        
    gotoxy(x,y+5);   printf(" / /  | |  \\ \\");       
    gotoxy(x,y+6);   printf("/_/   | |   \\_\\");      
    gotoxy(x,y+7);   printf("      |_|    ");          
    gotoxy(x,y+8);   printf("    __   __ ");    
    gotoxy(x,y+9);   printf("   / /   \\ \\");    
    gotoxy(x,y+10);  printf("  / /     \\ \\");   
    gotoxy(x,y+11);  printf(" /_/       \\_\\");  
} 
                  
void boss2(int x,int y){
    gotoxy(x,y);     printf("    ___");          
    gotoxy(x,y+1);   printf("   /   \\");        
    gotoxy(x,y+2);   printf("   \\___/ "); 
    gotoxy(x,y+3);   printf("   __ __ ");         
    gotoxy(x,y+4);   printf(" / / \\ \\   ___");        
    gotoxy(x,y+5);   printf("| |   | | |___|");       
    gotoxy(x,y+6);   printf("\\_\\   | |");      
    gotoxy(x,y+7);   printf("      /_/");          
    gotoxy(x,y+8);   printf("    __   __ ");    
    gotoxy(x,y+9);   printf("   / /   \\ \\");    
    gotoxy(x,y+10);  printf("  / /     | |");   
    gotoxy(x,y+11);  printf(" /_/     /_/ ");  
} 
 
void boss3(int x,int y){
    gotoxy(x,y);     printf("    ___");          
    gotoxy(x,y+1);   printf("   /   \\");        
    gotoxy(x,y+2);   printf("   \\___/ "); 
    gotoxy(x,y+3);   printf("   __ __   __  ");         
    gotoxy(x,y+4);   printf("  / / \\ \\  \\ \\ ");        
    gotoxy(x,y+5);   printf(" / /   | |  | |");       
    gotoxy(x,y+6);   printf("/_/    | | /_/");      
    gotoxy(x,y+7);   printf("      /_/");          
    gotoxy(x,y+8);   printf("    __   __ ");    
    gotoxy(x,y+9);   printf("   \\ \\ \\ \\");    
    gotoxy(x,y+10);  printf("    | |   \\ \\");   
    gotoxy(x,y+11);  printf("   /_/     \\_\\");  
}             

void boss4(int x,int y){
    gotoxy(x,y);     printf("         ___");          
    gotoxy(x,y+1);   printf("        /   \\");        
    gotoxy(x,y+2);   printf("        \\___/ "); 
    gotoxy(x,y+3);   printf("        __ __");         
    gotoxy(x,y+4);   printf(" ___   / / \\ \\ ");        
    gotoxy(x,y+5);   printf("|___| | |   | |");       
    gotoxy(x,y+6);   printf("      | |  /_/");      
    gotoxy(x,y+7);   printf("       \\_\\");          
    gotoxy(x,y+8);   printf("     __   __ ");    
    gotoxy(x,y+9);   printf("    / /   \\ \\");    
    gotoxy(x,y+10);  printf("   | |     \\ \\");   
    gotoxy(x,y+11);  printf("    \\_\\     \\_\\");  
}  

void boss5(int x,int y){
    gotoxy(x,y);     printf("       ___");          
    gotoxy(x,y+1);   printf("      /   \\");        
    gotoxy(x,y+2);   printf("      \\___/ "); 
    gotoxy(x,y+3);   printf("  __   __ __ ");         
    gotoxy(x,y+4);   printf(" / /  / / \\ \\");        
    gotoxy(x,y+5);   printf("| |  | |   \\ \\");       
    gotoxy(x,y+6);   printf(" \\_\\ | |    \\_\\");      
    gotoxy(x,y+7);   printf("      \\_\\");          
    gotoxy(x,y+8);   printf("   __   __ ");    
    gotoxy(x,y+9);   printf("  / /  / /");    
    gotoxy(x,y+10);  printf(" / /  | | ");   
    gotoxy(x,y+11);  printf("/_/    \\_\\");  
} 

void boss6(int x,int y){
    gotoxy(x,y);     printf("              ");          
    gotoxy(x,y+1);   printf("              ");        
    gotoxy(x,y+2);   printf("              "); 
    gotoxy(x,y+3);   printf("              ");         
    gotoxy(x,y+4);   printf("              ");        
    gotoxy(x,y+5);   printf("              ");       
    gotoxy(x,y+6);   printf("              ");      
    gotoxy(x,y+7);   printf("              ");          
    gotoxy(x,y+8);   printf("              ");    
    gotoxy(x,y+9);   printf("              ");    
    gotoxy(x,y+10);  printf("              ");   
    gotoxy(x,y+11);  printf("              ");  
}  

void frame1(int x,int y){        
    gotoxy(x,y);  printf("  o  ");
    gotoxy(x,y+1);printf(" /|\\ "); 
    gotoxy(x,y+2);printf(" / \\ ");             
    //printf("  o   \n"); 
    //printf(" /|\\ \n");  
    //printf(" / \\ \n");    
}
    
void frame2(int x,int y){
    gotoxy(x,y);  printf("  o ");
    gotoxy(x,y+1);printf(" <)-"); 
    gotoxy(x,y+2);printf(" / >");  
    //printf("  o   \n"); 
    //printf(" <)- \n");  
    //printf(" / >  \n"); 
}
    
void frame3(int x,int y){
    gotoxy(x,y);  printf("  o ");
    gotoxy(x,y+1);printf(" /)>"); 
    gotoxy(x,y+2);printf("  >\\");          
    //printf("  o   \n"); 
    //printf(" /)> \n");  
    //printf("  >\\  \n");          
}
    
void frame4(int x,int y){
    gotoxy(x+1,y);  printf(" o ");
    gotoxy(x+1,y+1);printf("-(>"); 
    gotoxy(x+1,y+2);printf("< \\");        
    //printf("  o   \n"); 
    //printf(" -(> \n");  
    //printf(" < \\  \n"); 
}
    
void frame5(int x,int y){
    gotoxy(x,y);  printf("  o ");
    gotoxy(x,y+1);printf(" <(\\"); 
    gotoxy(x,y+2);printf(" /< ");        
    //printf("  o   \n"); 
    //printf(" <(\\ \n");  
    //printf(" /<  \n");          
}
void frame6(int x,int y){
    gotoxy(x,y);  printf("     ");
    gotoxy(x,y+1);printf("     "); 
    gotoxy(x,y+2);printf("     ");                 
}
void frame7(int x,int y){
    gotoxy(x,y);  printf(" o_ ");
    gotoxy(x,y+1);printf("-|__"); 
    gotoxy(x,y+2);printf("<   ");                 
}
void frame8(int x,int y){
    gotoxy(x,y);  printf(" _o ");
    gotoxy(x,y+1);printf("__|-"); 
    gotoxy(x,y+2);printf("   >");                 
}


// _o    
//__|-   
//   >
//  o_    
// -|__   
// < 
      
void jogo(int nomecor){
     int restbos=0;
     int contbos=0;
     int cntbos=1;
     int boss=0;
     int xboss=65;
     int yboss=12;
     int socoboss1=0;
     int socoboss2=0;
     int vidaboss=7;
   
     int livre,ini,dir=0,inipulo=0,pular1=0,pular2=0,unipuloini=0,livre1=0,tec,rest,rest2,a=2,cont=0,cont2,pulo,unipulo=0,limit=0,limit2=0;   
     int npulo=0,vd=7,vdini1=3,chutini=0,chut=0;
     int pontos=0,coracao=0,vds[9];
     
     int combate=0;
     int inimigos=1;
     int parando=0;
     
     int limpatela=0;
     
     int ini2, inipulo2, pular11, pular12, unipuloini2=0, rest3;
     int cont3;
     int npulo2=0,vdini2=3,chutini2=0;
     int corini2=12;
     
     int iniesc=1;
     int fase=1;
     
     vds[0]=0;
     vds[1]=0;
     vds[2]=0;
     vds[3]=0;
     vds[4]=0;
     vds[5]=0;
     vds[6]=0;
     vds[7]=0; 
     vds[8]=0; 
         
     ypulo=y;
     pulo=y;
     ypuloini=yo1;
     puloini=yo1;
     
     ypuloini2=yo2;
     puloini2=yo2;
     
     textbackground(8);
     gotoxy(1,24);printf("                                                                                ");
     gotoxy(1,1); printf("                                                                              ");     
     for (cont2=0;cont2<24;cont2++){
         gotoxy(1,cont2);printf(" ");
         gotoxy(80,cont2);printf(" ");
     }
     
     textbackground(0);
     do{
         
         if (fase==2){
             textbackground(12); 
             gotoxy(2,12);printf("|__|__|__|__|__|__|__|__|_|");//54  36
             gotoxy(2,13);printf("|_|__|__|__|__|__|__|__|__|");
             gotoxy(2,14);printf("|__|__|__|__|__|__|__|__|_|");
             gotoxy(2,15);printf("|_|__|__|__|__|__|__|__|__|");
             gotoxy(2,16);printf("|__|__|__|__|__|__|__|__|_|");
             gotoxy(2,17);printf("|_|__|__|__|__|__|__|__|__|");
             gotoxy(2,18);printf("|__|__|__|__|__|__|__|__|_|");
             gotoxy(2,19);printf("|_|__|__|__|__|__|__|__|__|");
             gotoxy(2,20);printf("|__|__|__|__|__|__|__|__|_|");
             gotoxy(2,21);printf("|_|__|__|__|__|__|__|__|__|");
             gotoxy(2,22);printf("|__|__|__|__|__|__|__|__|_|");
             gotoxy(2,23);printf("|_|__|__|__|__|__|__|__|__|"); 
             
             gotoxy(54,12);printf("|__|__|__|__|__|__|__|__|_");
             gotoxy(54,13);printf("|_|__|__|__|__|__|__|__|__");
             gotoxy(54,14);printf("|__|__|__|__|__|__|__|__|_");
             gotoxy(54,15);printf("|_|__|__|__|__|__|__|__|__");
             gotoxy(54,16);printf("|__|__|__|__|__|__|__|__|_");
             gotoxy(54,17);printf("|_|__|__|__|__|__|__|__|__");
             gotoxy(54,18);printf("|__|__|__|__|__|__|__|__|_");
             gotoxy(54,19);printf("|_|__|__|__|__|__|__|__|__");
             gotoxy(54,20);printf("|__|__|__|__|__|__|__|__|_");
             gotoxy(54,21);printf("|_|__|__|__|__|__|__|__|__");
             gotoxy(54,22);printf("|__|__|__|__|__|__|__|__|_");
             gotoxy(54,23);printf("|_|__|__|__|__|__|__|__|__"); 
             textbackground(0); 
         }
         
         
         textbackground(8);
         gotoxy(1,24);printf("                                                                                ");
         gotoxy(1,1); printf("                                                                              ");     
         for (cont2=0;cont2<24;cont2++){
             gotoxy(1,cont2);printf(" ");
             gotoxy(80,cont2);printf(" ");
         }
         
         
        if (kbhit()){                     
           tec=getch();            
           if (tec==224){
              tec=getch();
           }         
        } 
          textbackground(0);
          textcolor(7);
         gotoxy(2,2);printf("       "); 
         gotoxy(2,2);printf("VIDA:%d",vd);
         gotoxy(10,2);printf("PONTOS:%d",pontos);
         if (limit2==1){
            textbackground(12);
         }else{
              textbackground(0); 
         }                              
         if (vd<=0){
            //tec=-32;
            do{ 
               textbackground(12);
               textcolor(0);            
               gotoxy(15,5); printf(" _____                                                    ");
               gotoxy(15,6); printf("|  __ \\                                                   ");
               gotoxy(15,7); printf("| |  \\/  __ _  _ __ ___    ___    ___  __   __  ___  _ __ ");
               gotoxy(15,8);printf("| | __  / _` || '_ ` _ \\  / _ \\  / _ \\ \\ \\ / / / _ \\| '__|");
               gotoxy(15,9);printf("| |_\\ \\| (_| || | | | | ||  __/ | (_) | \\ V / |  __/| |   ");
               gotoxy(15,10);printf(" \\____/ \\__,_||_| |_| |_| \\___|  \\___/   \\_/   \\___||_|   ");
   
               if (kbhit()){                     
                  tec=getch();            
               }              
            }
            while(tec!=27); 
            exit(0);               
         }
         
         if (tec!=-32){                 
            if (tec == 'w' || tec == 'W'){
               tec = 72;
            }
            if (tec == 's' || tec == 'S'){
               tec = 80;
            }
            if (tec == 'a' || tec == 'A'){
               tec = 75;
            }
            if (tec == 'd' || tec == 'D'){
               tec = 77;
            }
            
            switch (tec){
                   case 32://espaço         
                        int escolini;
                        if (chut==0){
                            chut=1;                           
                            textcolor(nomecor);                                                
                            
                            if (boss==41){
                                if (x>=xboss&&x<=xboss+12){
                                   vidaboss--;
                                }
                            }
                            
                            if (x-xo1<=4&&x-xo1>=0){
                               if (y==yo1){
                                  vdini1--; 
                                  iniesc=1;                              
                               }                         
                            }
                                
                            if (x-xo1>=-4&&x-xo1<=-1){
                               if (y==yo1){                       
                                  vdini1--;
                                  iniesc=1;
                               }
                            }
                            
                            
                            if (x-xo2<=4&&x-xo2>=0){
                               if (y==yo2){
                                  vdini2--;    
                                  iniesc=2;                           
                               }                         
                            }
                                
                            if (x-xo2>=-4&&x-xo2<=-1){
                               if (y==yo2){                       
                               vdini2--;
                               iniesc=2;
                               }
                            }
                            if(iniesc==1){
                                if (x>xo1){
                                   frame8(x,y); 
                                   Sleep(80);
                                }else{
                                      frame7(x,y); 
                                      Sleep(80);
                                }
                            }
                            if(iniesc==2){
                                if (x>xo2){
                                   frame8(x,y); 
                                   Sleep(80);
                                }else{
                                      frame7(x,y); 
                                      Sleep(80);
                                }
                            }
                        }
                        //if()
                        break;
                        
                   case 72 : //SETA PRA CIMA---------------------------------------  
                        if (unipulo==0){
                           ypulo=y;
                           pulo=y-6;
                           unipulo=1;
                        }
                        break; //SETA PRA CIMA---------------------------------------          
                   case 80: //SETA PRA BAIXO--------------------------------------- 
                   
                        break;//SETA PRA BAIXO--------------------------------------- 
                   case 75: //SETA PRA ESQUERDA---------------------------------------                                                
                        if (unipulo==1 && rest2==0){
                           x++;
                        }
                        x--;
                        if (x<2){
                           x=2;
                        }
                        cont=0;                             
                        rest=x%2;                        
                        frame6(x+1,y);                        
                        if (rest==0){
                           textcolor(nomecor);          
                           frame4(x,y);           
                        }else{
                              textcolor(nomecor);          
                              frame5(x,y); 
                        }  
                                             
                        break; //SETA PRA ESQUERDA--------------------------------------- 
                   case 77: //SETA PRA DIREITA---------------------------------------                       
                        if (unipulo==1 && rest2==0){
                           x--;
                        }
                        x++;
                        if (x>75){
                           x=75;
                        }
                        cont=0;          
                        rest=x%2;                       
                        frame6(x-1,y);                        
                        if (rest==0){
                           textcolor(nomecor);          
                           frame2(x,y);           
                        }else{
                              textcolor(nomecor);          
                              frame3(x,y); 
                        }
                                                
                        break;//SETA PRA DIREITA---------------------------------------                                              
            }
         }
         
         if (chut>=1){
            chut++;
         }
         if (chut>=6){
            chut=0;
         }
         rest2=a%3;  
         a++;
         if (y<3){
            y=2;
            pulo=2;
         }
         if (a>=9){
            a=2;
         }
         if (rest2==0){               
             if (pulo<y){
                 y--;
                 gotoxy(x,y+3);printf("     ");
             }else{
                   if (y<ypulo){
                      y++;
                      pulo++;
                      unipulo=1;
                      gotoxy(x,y-1);printf("   ");       
                   }
             }
             if (y==pulo&&y==ypulo){
                unipulo=0;
             }
         }                        
         cont++;
         if (tec!=27&&tec!=-32){
            tec=0;
         }       
         if (cont>2){
            textcolor(nomecor);
            frame1(x,y);
         }
         
         if (fase==2&&x>=28||limit==1){
            limit=1;
            limit2=0;
            if (y>9){               
                if (limit2==0&&limpatela==0){
                   limpatela=1;
                   textbackground(0);
                   system("cls");
                }
                if (x<29){
                   x=29;                       
                }
                if (x>49){
                   x=49;                        
                }
            }
         }else{
               if (fase==2){
                  limit2=1;
               }
         } 
         textbackground(0);         
         cair=1;// PERSONAGEM CAIRA SE NAO TIVER NO OBSTACULO
         if (fase==1){         
            fisica(20,19,10);// OBJ 1                
            fisica(35,14,20);// OBJ 2         
            fisica(25,8,10);// OBJ 3        
            fisica(2,11,12);// QJ
            
         }
         if (fase==2){         
            fisica(30,19,10);// OBJ 1                
            fisica(30,14,10);// OBJ 2        
            fisica(2,12,27);// OBJ  MURO 1
                 
            fisica(43,19,10);// OBJ 1
            fisica(43,14,10);// OBJ 2
            fisica(54,12,27);// OBJ  MURO 2                 
                                 
         }              
         if (cair==1){// PERSONAGEM CAIRA SE NAO TIVER NO OBSTACULO
            ypulo=21;
         }
         cair=0;
         livre1++;
         if (livre1>=3){
            livre1=1;
         }
         if (tec==-32){         
            frame6(x,y);//faliceu  
         }
         if (vdini1>0){
             //IA INIMIGO_____________________________________________________________
             //PULO
             
             inipulo=0; 
             if (y==yo1){
                ini=x;
             }else{                                  
                   if (fase==1){
                       if (npulo==1){
                          if (unipulo==0){                                                           
                             ini=22;                                            
                             inipulo=1;                      
                             dir=0;               
                          }
                       }else{
                             if (npulo==2){
                                ini=40;                                               
                                inipulo=1;                      
                                dir=0; 
                             }else{
                                   if (npulo==3){
                                      ini=26;                  
                                      inipulo=1;                      
                                      dir=0; 
                                   }
                             }                              
                       }
                   }
                   if (fase==2){                       
                       if (npulo==1){
                          if (unipulo==0){                                                           
                             ini=33; 
                             if (x>40){
                                ini=47;
                             }                                                                       
                             inipulo=1;                      
                             dir=0;               
                          }
                       }else{
                             if (npulo==2){
                                ini=33;
                                if (x>40){
                                   ini=47;
                                }                                                
                                inipulo=1;                      
                                dir=0; 
                             }else{
                                   if (npulo==3){
                                      if (x<28){
                                         ini=18;
                                      }
                                      if (x>50){
                                         ini=60;
                                      }                                                    
                                      inipulo=1;                      
                                      dir=0; 
                                   }
                             }                              
                       }
                   }
                                          
             }
             
             if (fase==1){
                 if (yo1==21){
                    npulo=1;
                 }else{
                       if (yo1<=16&&unipuloini==0){
                          npulo=2;         
                       }//26
                 }
                if (yo1<=11&&unipuloini==0){
                   npulo=3;
                } 
                if (y>yo1){
                   npulo=0;
                   ini=11;
                }
            }
            
            if (fase==2){
                if (yo1==21){
                    npulo=1;
                 }else{
                       if (yo1<=16&&unipuloini==0){
                          npulo=2;         
                       }//26
                 }
                if (yo1<=11&&unipuloini==0){
                   npulo=3;
                } 
                if (y>yo1&&unipuloini==0){
                   npulo=0;
                   if (xo1>39){
                      ini=35;
                   }
                   if (xo1<39){
                      ini=43;
                   }                 
                }
            }
             
             
             if (pular1==1&&pular2==1&&unipuloini==0){
                 if (inipulo==1 && dir==0){            
                    ypuloini=yo1;
                    puloini=yo1-6; 
                    unipuloini=1;                     
                 }
             }
             
             rest2=a%3;  
             if (yo1<3){
                yo1=2;
                puloini=2;
             }
             //if (a>=9){
             //   a=2;
             //}
             if (rest2==0){               
                 if (puloini<yo1){
                     unipuloini==1;
                     yo1--;
                     gotoxy(xo1+1,yo1+3);printf("   ");
                 }else{
                       if (yo1<ypuloini){                      
                          yo1++;
                          puloini++;
                          gotoxy(xo1,yo1-1);printf("   ");       
                       }
                 }
                 if (yo1==puloini&&yo1==ypuloini){
                   unipuloini=0;
                 }else{
                       unipuloini=1;
                 }
             }                    
             
             pular1=0;
             pular2=0;
             //PULO
             cair2=1;
             if (fase==1){         
                fisicaini(20,19,10);
                fisicaini(35,14,20);
                fisicaini(25,8,10);// OBJ 3        
                fisicaini(2,11,12);
             }
             if (fase==2){         
                fisicaini(30,19,10);
                fisicaini(30,14,10);
                fisicaini(43,19,10);// OBJ 3        
                fisicaini(43,14,10);
                
                fisicaini(2,12,27);// OBJ  MURO 1
                fisicaini(54,12,27);// OBJ  MURO 2  
                
                if (yo1>9){
                    if (xo1<29){//25
                       xo1=29;                     
                    }
                    if (xo1>49){
                       xo1=49;                        
                    }                    
                }
                
             }
                         
             if (cair2==1){// PERSONAGEM CAIRA SE NAO TIVER NO OBSTACULO
                ypuloini=21;
                unipuloini==1;
             }
             
             cair2=0;
             if (chutini==0){
                 chutini=1;              
                 if (x>xo1 && x<=xo1+4 && y==yo1){
                    textcolor(12);
                    frame7(xo1,yo1);
                    Sleep(80);
                    vd--;
                 }
                 if (x<=xo1 && x+4>=xo1 && y==yo1){
                    textcolor(12);
                    frame8(xo1,yo1);
                    Sleep(80);
                    vd--;
                 }
             }
             if (chutini>=1){
                chutini++;
             }
             if (chutini>=6){
                chutini=0;
             }             
             rest2=livre1%2;         
             textcolor(12);
             frame1(xo1,yo1); 
             if (rest2==0){        
                 if (xo1>ini+4){
                    xo1--;
                    rest=xo1%2;
                    frame6(xo1+1,yo1); 
                    if (rest==0){
                       textcolor(12);          
                       frame4(xo1,yo1);           
                    }else{
                          textcolor(12);          
                          frame5(xo1,yo1); 
                    }         
                 }else{
                       pular1=1;
                 }
                 if (xo1+4<ini){
                    xo1++;
                    rest=xo1%2;
                    frame6(xo1+1,yo1); 
                    if (rest==0){
                       textcolor(12);          
                       frame2(xo1,yo1);           
                    }else{
                          textcolor(12);          
                          frame3(xo1,yo1); 
                    }         
                 }else{
                       pular2=1;
                 }
             }
         }else{
           if (vdini1==0){
              frame6(xo1,yo1);
              pontos=pontos+100;
           }
           vdini1=-1;//FALICEU
           xo1=-10;
           yo1=-10;
         }
         textcolor(nomecor);
         //IA INIMIGO_____________________________________________________________   
         
         
         //ia2____________________________________________________________
         if (vdini2>0){
             
                 //PULO
                 
                 inipulo2=0; 
             if (y==yo2){
                ini2=x;
             }else{                                  
                   if (fase==1){
                       if (npulo2==1){
                          if (unipulo==0){                                                           
                             ini2=22;                                            
                             inipulo2=1;                      
                             dir=0;               
                          }
                       }else{
                             if (npulo2==2){
                                ini2=40;                                               
                                inipulo2=1;                      
                                dir=0; 
                             }else{
                                   if (npulo2==3){
                                      ini2=26;                  
                                      inipulo2=1;                      
                                      dir=0; 
                                   }
                             }                              
                       }
                   }
                   if (fase==2){                       
                       if (npulo2==1){
                          if (unipulo==0){                                                           
                             ini2=33; 
                             if (x>40){
                                ini2=47;
                             }                                                                       
                             inipulo2=1;                      
                             dir=0;               
                          }
                       }else{
                             if (npulo2==2){
                                ini2=33;
                                if (x>40){
                                   ini2=47;
                                }                                                
                                inipulo2=1;                      
                                dir=0; 
                             }else{
                                   if (npulo2==3){
                                      if (x<28){
                                         ini2=18;
                                      }
                                      if (x>50){
                                         ini2=60;
                                      }                                                    
                                      inipulo2=1;                      
                                      dir=0; 
                                   }
                             }                              
                       }
                   }
                                          
             }
             
             if (fase==1){
                 if (yo2==21){
                    npulo2=1;
                 }else{
                       if (yo2<=16&&unipuloini2==0){
                          npulo2=2;         
                       }//26
                 }
                if (yo2<=11&&unipuloini2==0){
                   npulo2=3;
                } 
                if (y>yo2){
                   npulo2=0;
                   ini2=11;
                }
            }
            
            if (fase==2){
                if (yo2==21){
                    npulo2=1;
                 }else{
                       if (yo2<=16&&unipuloini2==0){
                          npulo2=2;         
                       }//26
                 }
                if (yo2<=11&&unipuloini2==0){
                   npulo2=3;
                } 
                if (y>yo2&&unipuloini2==0){
                   npulo2=0;
                   if (xo2>39){
                      ini2=35;
                   }
                   if (xo2<39){
                      ini2=43;
                   }                 
                }
            }
                 
                 
                 if (pular11==1&&pular12==1&&unipuloini2==0){
                     if (inipulo2==1 && dir==0){            
                        ypuloini2=yo2;
                        puloini2=yo2-6; 
                        unipuloini2=1;                     
                     }
                 }
                 
                 rest3=a%3;  
                 if (yo2<3){
                    yo2=2;
                    puloini2=2;
                 }
                 //if (a>=9){
                 //   a=2;
                 //}
                 if (rest3==0){               
                     if (puloini2<yo2){
                         unipuloini2==1;
                         yo2--;
                         gotoxy(xo2+1,yo2+3);printf("   ");
                     }else{
                           if (yo2<ypuloini2){                      
                              yo2++;
                              puloini2++;
                              gotoxy(xo2,yo2-1);printf("   ");       
                           }
                     }
                     if (yo2==puloini2&&yo2==ypuloini2){
                       unipuloini2=0;
                     }else{
                           unipuloini2=1;
                     }
                 }                    
                 
                 pular11=0;
                 pular12=0;
                 //PULO
                 cair3=1;
                 
                 if (fase==1){                                            
                    fisicaini2(20,19,10);
                    fisicaini2(35,14,20);
                    fisicaini2(25,8,10);// OBJ 3        
                    fisicaini2(2,11,12);
                }
                if (fase==2){         
                    fisicaini2(30,19,10);
                    fisicaini2(30,14,10);
                    fisicaini2(43,19,10);// OBJ 3        
                    fisicaini2(43,14,10);
                    
                    fisicaini2(2,12,27);// OBJ  MURO 1
                    fisicaini2(54,12,27);// OBJ  MURO 2  
                    
                    if (yo2>9){
                        if (xo2<29){//25
                           xo2=29;                     
                        }
                        if (xo2>49){
                           xo2=49;                        
                        }                    
                    }
                
                }
                
                                
                 if (cair3==1){// PERSONAGEM CAIRA SE NAO TIVER NO OBSTACULO
                    ypuloini2=21;
                    unipuloini2==1;
                 }
                 
                 cair3=0;
                 if (chutini2==0){
                     chutini2=1;              
                     if (x>xo2 && x<=xo2+4 && y==yo2){
                        textcolor(corini2);
                        frame7(xo2,yo2);
                        Sleep(80);
                        vd--;
                     }
                     if (x<=xo2 && x+4>=xo2 && y==yo2){
                        textcolor(corini2);
                        frame8(xo2,yo2);
                        Sleep(80);
                        vd--;
                     }
                 }
                 
                 if (chutini2>=1){
                    chutini2++;
                 }
                 if (chutini2>=6){
                    chutini2=0;
                 }             
                 rest3=livre1%2;         
                 textcolor(corini2);
                 frame1(xo2,yo2); 
                 int stop2;
                 stop2=1;
                 if (xo2>xo1+4||yo2!=yo1){
                     stop2=0;
                 }
                 if (xo2+4<xo1||yo2!=yo1){
                    stop2=0;
                 }
                 if (stop2!=1){
                     if (rest3==0){        
                         if (xo2>ini2+4){
                            xo2--;
                            rest=xo2%2;
                            frame6(xo2+1,yo2); 
                            if (rest==0){
                               textcolor(corini2);          
                               frame4(xo2,yo2);           
                            }else{
                                  textcolor(corini2);          
                                  frame5(xo2,yo2); 
                            }         
                         }else{
                               pular11=1;
                         }
                         if (xo2+4<ini2){
                            xo2++;
                            rest=xo2%2;
                            frame6(xo2+1,yo2); 
                            if (rest==0){
                               textcolor(corini2);          
                               frame2(xo2,yo2);           
                            }else{
                                  textcolor(corini2);          
                                  frame3(xo2,yo2); 
                            }         
                         }else{
                               pular12=1;
                         }
                     }
                 }
             }else{
               if (vdini2==0){
                  frame6(xo2,yo2);
                  pontos=pontos+100;
                  if (coracao==2&&fase!=3){
                     pontos=pontos+100;
                  }
               }
               vdini2=-1;//FALICEU
               xo2=-10;
               yo2=-10;
         }
         if (vd<=0){
            textcolor(nomecor);        
            frame6(x,y);
            
            if (vdini1>0){
               textcolor(12);           
               frame1(xo1,yo1);
            }
            if (vdini2>0){
               textcolor(corini2);           
               frame1(xo2,yo2);
            }
         }
         textcolor(nomecor);
         //ia2____________________________________________________________
         
         
         
         
         
         
         if (fase==1){    
                             
             textbackground(8);
             gotoxy(20,19);printf("          ");
             gotoxy(35,14);printf("                    ");
             gotoxy(25,8);printf("          ");                                         
             textbackground(0);                                      
             
             textbackground(9);
             gotoxy(2,11);printf("            ");//teto
             textcolor(15);
             gotoxy(4,13);printf("   QG   ");
             textcolor(nomecor);
             
             for (livre=1;livre<=12;livre++){
                  gotoxy(2,11+livre);printf(" ");              
                  gotoxy(13,11+livre);printf(" ");
                                                          
             }                         
             //QJ
             textbackground(0);                                      
         } 
         if (fase==2){            
             textbackground(8);
             gotoxy(30,19);printf("          ");
             gotoxy(30,14);printf("          ");
             
             gotoxy(43,19);printf("          ");
             gotoxy(43,14);printf("          ");                                                                  
             textcolor(7);                                                                         
             textbackground(0);             
         } 
         if (fase==3){
            
            textbackground(5);
            gotoxy(2,6);printf("                    "); 
            gotoxy(60,6);printf("                    "); 
            textbackground(0); 
            
            textcolor(12);
               
           if (combate<4){
              frame1(2,3);
           }
           if (combate<3){
              frame1(7,3);
           }
           if (combate<2){
              frame1(12,3); 
           }
           if (combate<1){
              frame1(17,3);
           } 
           
           
           
           if (combate<1){
              frame1(60,3);
           } 
           if (combate<2){
              frame1(65,3);
           } 
           if (combate<3){
              frame1(70,3); 
           } 
           if (combate<4){
              frame1(75,3);
           }                


            if (combate>=1){
               inimigos=1;
               frame6(17,3);
               frame6(60,3);
            }
            if (combate>=2){
               frame6(12,3);
               frame6(65,3);
            }
            if (combate>=3){
               frame6(7,3);
               frame6(70,3);
            }
            if (combate>=4){
               frame6(2,3);
               frame6(75,3);
            }         
         }
         if (infinito == 1){
            vd=7;//infinito
         } 
         //gotoxy(7,7);printf("%d  %d",x,y);                               
         if (vdini1<=0&&vdini2<=0 && fase==1){
            fase=2;  
            system("cls");
            vdini1=3;//3
            vdini2=3;//3
            unipuloini2=0;
            unipuloini=0;
            unipulo=0;
            xo1=29;
            yo1=11;
            ypuloini=11;
            puloini=11;
            xo2=49;
            yo2=11;
            ypuloini2=11;
            puloini2=11;            
            vd=7;
            
            x=2;
            y=21;
            pulo=21;
            ypulo=21;
                                                     
         }
         
         
               
         if (vdini1<=0&&vdini2<=0&&fase==2&&coracao==0){
            //coracao=1;
            textcolor(12);
            if (vds[0]==0){
               gotoxy(35,18);printf("%c",3);
            }
            if (vds[1]==0){
               gotoxy(48,18);printf("%c",3);
            }
            if (vds[2]==0){
               gotoxy(35,13);printf("%c",3);
            } 
            if (vds[3]==0){
               gotoxy(48,13);printf("%c",3);
            }
            if (vds[4]==0){
               gotoxy(9,11);printf("%c",3);//9 90
            }
            if (vds[5]==0){
               gotoxy(20,11);printf("%c",3);//20 90
            }
            if (vds[6]==0){
                gotoxy(61,11);printf("%c",3);//61 90
            }
            if (vds[7]==0){
               gotoxy(70,11);printf("%c",3);//70 90
            }
            
            
            if (x==33&&y==16&&vds[0]==0){
               vds[0]=1;
               vds[8]++; 
               vd++;                                        
            }
            
            if (x==46&&y==16&&vds[1]==0){
               vds[1]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==33&&y==11&&vds[2]==0){
               vds[2]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==46&&y==11&&vds[3]==0){
               vds[3]=1;
               vds[8]++; 
               vd++;                          
            }
           
           
            
            if (x==7&&y==9&&vds[4]==0){
               vds[4]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==18&&y==9&&vds[5]==0){
               vds[5]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==59&&y==9&&vds[6]==0){
               vds[6]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==68&&y==9&&vds[7]==0){
               vds[7]=1;
               vds[8]++; 
               vd++;                          
            }
            if (vds[8]==8){
               coracao=1;
            } 
            textcolor(7); 
           //VIDA1 32 16  VIDA2 45  16  VIDA3 32 11  VIDA4 45  11 
         } 
         
         if (vdini1<=0&&vdini2<=0&&fase==2&&coracao==1){           
            coracao=2; 
            corini2=14;
            //vd=vd+8;
            unipulo=0;
            vdini1=3;//3
            vdini2=5;//3
            unipuloini2=0;
            unipuloini=0;
                                   
            xo1=2;
            yo1=9;
            ypuloini=9;
            puloini=9;
            
            xo2=75;
            yo2=9;
            ypuloini2=9;
            puloini2=9;    
         }    
         
         //if (fase!=3){
         //   vdini1=0;vdini2=0;fase=2;coracao=2;
         //}
         
         if (vdini1<=0&&vdini2<=0&&fase==3&&coracao==0){
            //coracao=1;
            textcolor(12);
            if (vds[0]==0){
               gotoxy(35,23);printf("%c",3);
            }
            if (vds[1]==0){
               gotoxy(48,23);printf("%c",3);
            }
            if (vds[2]==0){
               gotoxy(27,23);printf("%c",3);
            } 
            if (vds[3]==0){
               gotoxy(40,23);printf("%c",3);
            }
            if (vds[4]==0){
               gotoxy(9,23);printf("%c",3);//9 90
            }
            if (vds[5]==0){
               gotoxy(20,23);printf("%c",3);//20 90
            }
            if (vds[6]==0){
                gotoxy(61,23);printf("%c",3);//61 90
            }
            if (vds[7]==0){
               gotoxy(70,23);printf("%c",3);//70 90
            }
            
            
            if (x==33&&y==21&&vds[0]==0){
               vds[0]=1;
               vds[8]++; 
               vd++;                                        
            }
            
            if (x==46&&y==21&&vds[1]==0){
               vds[1]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==25&&y==21&&vds[2]==0){
               vds[2]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==38&&y==21&&vds[3]==0){
               vds[3]=1;
               vds[8]++; 
               vd++;                          
            }
           
           
            
            if (x==7&&y==21&&vds[4]==0){
               vds[4]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==18&&y==21&&vds[5]==0){
               vds[5]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==59&&y==21&&vds[6]==0){
               vds[6]=1;
               vds[8]++; 
               vd++;                          
            }
            
            if (x==68&&y==21&&vds[7]==0){
               vds[7]=1;
               vds[8]++; 
               vd++;                          
            }
            if (vds[8]==8){
               coracao=1;
               if (boss==1){
                  boss=41;//O numero mais malvado do universo 
               }
               if (combate==3){
                  combate=4;
                  parando=0;
               }
               if (combate==2){
                  combate=3;
                  parando=0;
               }
               if (combate==1){
                  combate=2;
               }
              
            } 
            textcolor(7); 
           //VIDA1 32 16  VIDA2 45  16  VIDA3 32 11  VIDA4 45  11 
         } 
         
         
         
         
         if (vdini1<=0&&vdini2<=0&&fase==2&&coracao==2){
            vds[0]=0;
            vds[1]=0;
            vds[2]=0;
            vds[3]=0;
            vds[4]=0;
            vds[5]=0;
            vds[6]=0;
            vds[7]=0;             
            vds[8]=0;
            corini2=12;
            coracao=0;
            fase=3;
            combate=1;// 2 inimigos
            vd=7;           
            vdini1=3;
            vdini2=3;        
            x=2;
            y=21;
            pulo=21;
            ypulo=21;
            unipulo=0;     
            xo1=17;
            yo1=3;
            ypuloini=3;
            puloini=3;
            unipuloini=0; 
            xo2=60;
            yo2=3;
            ypuloini2=3;
            puloini2=3; 
            unipuloini2=0; 
            limit=0;
            system("cls");
         }
         
         if (vdini1<=0&&vdini2<=0){
            if (vds[8]==8){
                 vds[0]=0;
                 vds[1]=0;
                 vds[2]=0;
                 vds[3]=0;
                 vds[4]=0;
                 vds[5]=0;
                 vds[6]=0;
                 vds[7]=0;             
                 vds[8]=0;
             } 
         }                                                   
         if (combate==2&&vdini1<=0&&vdini2<=0&&parando==0){
            parando=1;
            combate=2;
            coracao=0;
            vdini1=3;
            vdini2=3;
            
            xo1=12;
            yo1=3;
            ypuloini=3;
            puloini=3;
            unipuloini=0; 
            
            xo2=65;
            yo2=3;
            ypuloini2=3;
            puloini2=3; 
            unipuloini2=0;    
         }
         
          if (combate==3&&vdini1<=0&&vdini2<=0&&parando==0){
            parando=1;
            coracao=0;
            vdini1=3;
            vdini2=3;
            
            xo1=7;
            yo1=3;
            ypuloini=3;
            puloini=3;
            unipuloini=0; 
            
            xo2=70;
            yo2=3;
            ypuloini2=3;
            puloini2=3; 
            unipuloini2=0;    
         }
         
         if (combate==4&&vdini1<=0&&vdini2<=0&&parando==0){
            parando=1;
            coracao=0;
            vdini1=3;
            vdini2=3;
            
            xo1=2;
            yo1=3;
            ypuloini=3;
            puloini=3;
            unipuloini=0; 
            
            xo2=75;
            yo2=3;
            ypuloini2=3;
            puloini2=3; 
            unipuloini2=0; 
            boss=1;   
         }
         
         if (vidaboss<=0&&boss==41){
            boss=42;
            boss6(xboss,12);
         }
         if (boss==42){
            pontos=pontos+1000;
            boss=43;
         }
         if (boss==43){
            
            textbackground(10);
            textcolor(0);            
            gotoxy(15,5); printf("                            _                       ");
            gotoxy(15,6); printf("                           | |                      ");
            gotoxy(15,7); printf(" _ __    __ _  _ __   __ _ | |__    ___  _ __   ___ ");
             gotoxy(15,8);printf("| '_ \\  / _` || '__| / _` || '_ \\  / _ \\| '_ \\ / __|");
             gotoxy(15,9);printf("| |_) || (_| || |   | (_| || |_) ||  __/| | | |\\__ \\");
            gotoxy(15,10);printf("| .__/  \\__,_||_|    \\__,_||_.__/  \\___||_| |_||___/");
            gotoxy(15,11);printf("| |                                                 "); 
            gotoxy(15,12);printf("|_|                                                 ");    
            textbackground(0);                                                                       
         }     
         if (boss==41){
            boss1(xboss,12);
            contbos++;
            if (contbos>3){
               contbos=1;
            }  
            restbos=contbos%3;         
            if (restbos==0){
               if (x<xboss){
                   xboss--;
                   boss6(xboss+2,12);
                   cntbos++;
                   if (cntbos>2){
                      cntbos=1;
                   }
                   if (cntbos==1){
                      boss4(xboss,12);
                   }
                   if (cntbos==2){
                      boss5(xboss,12); 
                   } 
                   socoboss1=0;                          
               }else{
                     socoboss1=1;
               } 
               
               if (x>xboss){
                   xboss++;
                   if (xboss>65){
                      xboss=65;
                      vd--;
                   }
                   boss6(xboss-1,12);
                   cntbos++;
                   if (cntbos>2){
                      cntbos=1;
                   }
                   if (cntbos==1){
                      boss2(xboss,12);
                   }
                   if (cntbos==2){
                      boss3(xboss,12); 
                   } 
                   socoboss1=0;                      
               }else{
                     socoboss2=1;
               } 
               
               if (socoboss1==1&&socoboss2==1){
                  vd--;                                
               }           
            }                                  
            
            
         }
         
          
         Sleep(40);                       
     }     
     while(tec!=27);
     principal();
}
void controles(){
     int tec;
     textcolor(3);
         gotoxy(5,3); printf("       ____ "); 
         gotoxy(5,4); printf("      ||w ||");
         gotoxy(5,5); printf("      ||__||      ");
         gotoxy(5,6); printf(" ____ |/__\\| ____ ");
         gotoxy(5,7); printf("||a ||||s ||||d ||");
         gotoxy(5,8) ;printf("||__||||__||||__||");
         gotoxy(5,9); printf("|/__\\||/__\\||/__\\|"); 
         gotoxy(5,12);printf(" _________________ "); 
         gotoxy(5,13);printf("||               ||"); 
         gotoxy(5,14);printf("||_______________||"); 
         gotoxy(5,15);printf("|/_______________\\|"); 
         gotoxy(35,12);printf(" _____________ "); 
         gotoxy(35,13);printf("||   caps    ||"); 
         gotoxy(35,14);printf("||___________||"); 
         gotoxy(35,15);printf("|/___________\\|"); 
         
         gotoxy(42,16);printf("|");
         gotoxy(42,17);printf("v"); 
         gotoxy(40,18);printf("PAUSE");
         
         gotoxy(14,1);printf(".--> PULA");
         gotoxy(14,2);printf("|");
         
         gotoxy(1,5);printf("ESQUERDA");
         gotoxy(1,6);printf("^");
         gotoxy(1,7);printf("|___");
         
         gotoxy(23,5);printf(" DIREITA");
         gotoxy(23,6);printf("   ^");
         gotoxy(23,7);printf("___|");
         
         gotoxy(13,10);printf("|");
         gotoxy(13,11);printf(".--> AUXILIAR");
         
         gotoxy(13,16);printf("|");
         gotoxy(13,17);printf("v"); 
         gotoxy(10,18);printf("COMBATE");
                  
     
     do{
         tec=getch();        
          
     }
     
     while(tec!=27);
     principal();
}

//https://www.topster.pt/texto-para-ascii/doom.html
int principal(){
    int set=0,pos=15;
    for (int x=12;x>=0;x--){
        system("cls");
        textcolor(4);
        gotoxy(1,1+x);printf("      _    _        _                                __  _         _      _    ");
        gotoxy(1,2+x);printf("     | |  (_)      | |                              / _|(_)       | |    | |   ");
        gotoxy(1,3+x);printf(" ___ | |_  _   ___ | | __ _ __ ___    __ _  _ __   | |_  _   __ _ | |__  | |_  ");
        gotoxy(1,4+x);printf("/ __|| __|| | / __|| |/ /| '_ ` _ \\  / _` || '_ \\  |  _|| | / _` || '_ \\ | __| ");
        gotoxy(1,5+x);printf("\\__ \\| |_ | || (__ |   < | | | | | || (_| || | | | | |  | || (_| || | | || |_  ");
        gotoxy(1,6+x);printf("|___/ \\__||_| \\___||_|\\_\\|_| |_| |_| \\__,_||_| |_| |_|  |_| \\__, ||_| |_| \\__| ");
        gotoxy(1,7+x);printf("                                                             __/ |             ");
        gotoxy(1,8+x);printf("                                                            |___/              "); 
        textcolor(6);   
        gotoxy(27,7+x); printf(" _____  _   _  _____"); 
        gotoxy(27,8+x);printf("|  __ \\| | | |/  ___|");
        gotoxy(27,9+x);printf("| |  \\/| |_| |\\ `--."); 
        gotoxy(27,10+x);printf("| | __ |  _  | `--. \\");
        gotoxy(27,11+x);printf("| |_\\ \\| | | |/\\__/ /");
        gotoxy(27,12+x);printf("\\.____/\\_| |_/\____./ ");
        textcolor(3); 
        Sleep(45);
    }
    opcoesMenu();
    setinha(34,15);
    do{   
        set=getch();
        if (set!=-32){
            if (set == 'w' || set == 'W'){
               set = 72;
            }
            if (set == 's' || set == 'S'){
               set = 80;
            }
            switch (set){
                   case 72:pos--; break;//SETA PRA CIMA
                   case 80:pos++; break;//SETA PRA BAIXO      
            }
        }
        //gotoxy(1,24);printf("%d",set);//75 77
        if (pos<15){
           pos=19;//atualizar
        }
        if (pos>19){//atualizar
           pos=15;
        }
        opcoesMenu();
        setinha(34,pos);
        if (set==13){
            switch (pos){//atualizar
                   case 15:
                         system("cls"); 
                         escolPer();           
                        break;
                   case 16:
                        system("cls");
                        controles();
                        break;
                   case 17:
                        break;
                   case 18:
                        if (infinito == 0){
                           infinito = 1;
                        }else{
                              infinito = 0;
                        }
                        opcoesMenu();
                        break;                      
                   case 19:
                        set=27;
                        break;
            }
        }
        
        
        gotoxy(1,24);
    }
    while(set!=27);     
    exit(0);      
}




int main(){
    _setcursortype(_NOCURSOR);
    //_setcursortype(_NORMALCURSOR);
    principal();
    system("cls");
    return 0;
}
