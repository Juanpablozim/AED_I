#include "../../../professor/2022-2_aed1_exemplos/io.hpp"

void exercicio_01(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_01");
    
/* PROGRAMA PEDIDO */

    //DECLARACAO
    int lado;
    float area;

    //LE A ENTRADA E REALIZA A CONTA
    lado = IO_readint("Qual o lado do quadrado? ");
    area = (lado * lado) * 1.0 * 7;

    //MOSTRA O RESULTADO
    printf("\nLado = %d\nLado^2 * 7: %.1f\n", lado,area);
    
/* FIM DO PROGRAMA PEDIDO */

    //Encerrar
    pauseScr("Aperte ENTER");
}

void exercicio_02(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_02");

/* PROGRAMA PEDIDO */

    //DECLARACAO
    int lado;
    float area, perimetro;

    //LE A ENTRADA E REALIZA A CONTA
    lado = IO_readint("Qual o lado do quadrado? ");
    area = ((lado*1.0/2) * (lado*1.0/2));
    perimetro = 4*(lado*1.0/2);

    //MOSTRA O RESULTADO
    printf("\nLado/2 = %d\nArea: %.3f\t|\tPerimetro: %.1f\n", lado,area, perimetro);
    
/* FIM DO PROGRAMA PEDIDO */
    
    //Encerrar
    pauseScr("Aperte ENTER");
}

void exercicio_03(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_03");

/* PROGRAMA PEDIDO */

    //DECLARACAO
    int x, y;
    float area;

    //LE A ENTRADA E REALIZA A CONTA
    x = IO_readint("Qual o primeiro lado do retangulo? ");
    y = IO_readint("Qual o segundo lado do retangulo? ");
    area = (x * y) * 1.0 * 3;

    //MOSTRA O RESULTADO
    printf("\nx: %d\t|\ty:%d\nArea*3: %.1f\n", x, y,area);
    
/* FIM DO PROGRAMA PEDIDO */

    
    //Encerrar
    pauseScr("Aperte ENTER");
}

void exercicio_04(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_04");
    
/* PROGRAMA PEDIDO */

    //DECLARACAO
    int x, y;
    float area, perimetro;

    //LE A ENTRADA E REALIZA A CONTA
    x = IO_readint("Qual o primeiro lado do retangulo? ");
    y = IO_readint("Qual o segundo lado do retangulo? ");

    area = (x*1.0/4 * y*1.0/4) * 3;
    perimetro = 2*(x*1.0/4)+2*(y*1.0/4);

    //MOSTRA O RESULTADO
    printf("\nx: %d\t|\ty:%d\nArea*3: %.1f\t|\tPerimetro: %.1f\n", x, y,area, perimetro);
    
/* FIM DO PROGRAMA PEDIDO */
    
    //Encerrar
    pauseScr("Aperte ENTER");
}

void exercicio_05(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_05");

/* PROGRAMA PEDIDO */
    //DECLARACAO
    float base, altura;

    //ENTRADA DE VALORES
    base = IO_readfloat("Qual a base do triangulo? ");
    altura = IO_readfloat("Qual a altura do triangulo? ")*2;

    //SAIDA DE VALORES
    printf("\nBase: %.2f\t|\tALtura*2: %.2f\nArea: %.2f\n", base, altura, (base*altura/2));
/* FIM DO PROGRAMA PEDIDO */
    
    
    //Encerrar
    pauseScr("Aperte ENTER");
}

void exercicio_06(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_06");
    
/* PROGRAMA PEDIDO */
    //DECLARACAO
    float lado;

    //ENTRADA DE VALORES
    lado = IO_readfloat("Qual o lado do triangulo equilatero? ")/6;

    //SAIDA DE VALORES
    printf("\nLado/6: %.2f\t|\tALtura: %.2f\nArea: %.2f\t|\tPerimetro: %.2f\n", lado, (sqrt(3)*lado/2), (lado*sqrt(3)*lado/2/2), (lado*3));

/* FIM DO PROGRAMA PEDIDO */
    
    //Encerrar
    pauseScr("Aperte ENTER");
}

void exercicio_07(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_07");
    
/* PROGRAMA PEDIDO */
//DECLARACAO
    float lado;

    //ENTRADA DE VALORES
    lado = IO_readfloat("Qual o lado do cubo? ")*4;

    //SAIDA DE VALORES
    printf("\nLado*4: %.2f\nVolume: %.2f\n", lado, (pow(lado,3)));

/* FIM DO PROGRAMA PEDIDO */
    
    //Encerrar
    pauseScr("Aperte ENTER");
}

void exercicio_08(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_08");
    
/* PROGRAMA PEDIDO */
    float comprimento, largura, altura;

    //ENTRADA DE VALORES
    comprimento = IO_readfloat("Qual o comprimento do paralelepipedo? ")/5;
    largura = IO_readfloat("Qual a largura do paralelepipedo? ")/5;
    altura = IO_readfloat("Qual a altura do paralelepipedo? ")/5;

    //SAIDA DE VALORES
    printf("\nComprimento/5: %.2f\t|\tLargura/5: %.2f\t|\tAltura/5: %.2f\nVolume: %.2f\n", comprimento, largura, altura, (comprimento*largura*altura));

/* FIM DO PROGRAMA PEDIDO */
    
    //Encerrar
    pauseScr("Aperte ENTER");
}

void exercicio_09(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_09");
    
/* PROGRAMA PEDIDO */
    float raio;

    //ENTRADA DE VALORES
    raio = IO_readfloat("Qual o raio do circulo? ")/2;

    //SAIDA DE VALORES
    printf("\nRaio/2: %.2f\nArea: %.2f\n", raio, (2*M_PI*raio));
/* FIM DO PROGRAMA PEDIDO */
    
    //Encerrar
    pauseScr("Aperte ENTER");
}

void exercicio_10(){
    clrscr(); //limpa tela
    
    //identificar
    printf("\n%s\n\n", "817965_AED1_Exercicio_10");
    
/* PROGRAMA PEDIDO */
    float raio;

    //ENTRADA DE VALORES
    raio = IO_readfloat("Qual o raio desfera? ")*3/5;

    //SAIDA DE VALORES
    printf("\nRaio*3/5: %.2f\nVolume: %.2f\n", raio, ((4 * M_PI * pow(raio, 3))/3));

/* FIM DO PROGRAMA PEDIDO */
    
    //Encerrar
    pauseScr("Aperte ENTER");
}