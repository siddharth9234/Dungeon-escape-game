#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int game(){
    srand(time(NULL));
    char map[12][22];
    int c[10][20];
    for(int i=0;i<12;i++){
		for(int j=0;j<22;j++){
			if(i==0 || i==11 || j==0 || j==21){
				map[i][j]='#';
			}
			else{
				map[i][j]=' ';
			}
		}
	}
    map[11][20]=' ';
    typedef struct coordinates{
        int x;
        int y;
        char m;
    }coor;
    coor pl,mo,move;
    pl.x=rand()%(10-1+1)+1;
    pl.y=rand()%(20-1+1)+1;
    mo.x=rand()%(10-1+1)+1;
    mo.y=rand()%(20-1+1)+1;
    while(mo.x==pl.x && mo.y==pl.y){
        mo.x=rand()%(10-1+1)+1;
        mo.y=rand()%(20-1+1)+1;
    }
    do{
        printf("\e[1;1H\e[2J");
        mo.x=rand()%(10-1+1)+1;
        mo.y=rand()%(20-1+1)+1;
        while(mo.x==pl.x && mo.y==pl.y){
            mo.x=rand()%(10-1+1)+1;
            mo.y=rand()%(20-1+1)+1;
        }
        map[mo.x][mo.y]='*';
        map[pl.x][pl.y]='O';
        c[mo.x][mo.y]=1;
        printf("\n");
        for(int i=0;i<12;i++){
            for(int j=0;j<22;j++){
                printf("%c",map[i][j]);
            }
            printf("\n");
        }
        printf("\n\nEnter move to escape:");
        scanf(" %c", &move.m);
     //   printf("\n");
        if(move.m=='w'){
            map[pl.x][pl.y]=' ';
            pl.x=pl.x-1;
        }
        if(move.m=='a'){
            map[pl.x][pl.y]=' ';
            pl.y=pl.y-1;
        }
        if(move.m=='s'){
            map[pl.x][pl.y]=' ';
            pl.x=pl.x+1;
        }
        if(move.m=='d'){
            map[pl.x][pl.y]=' ';
            pl.y=pl.y+1;
        }
        if(pl.x==0 || pl.x==11 || pl.y==0 || pl.y==21){
            if(pl.x==11 && pl.y==20){
                printf("You won!!");
                break;
            }
            else{
                printf("You strike with the wall!!");
                break;
            }
        }
        else if(c[pl.x][pl.y]==1){
            printf("Monster ate you!!");
            break;
        }
        else if(mo.x==10 && mo.y==20){
            printf("Door is closed!!\nYou lost!!");
            break;
        }
      //  map[mo.x][mo.y]=' ';
       /* for(int i=0;i<12;i++){
            for(int j=0;j<22;j++){
                printf("%c",map[i][j]);
            }
            printf("\n");
        } */
    }while(pl.x!=mo.x || pl.y!=mo.y);
}

int main(){
    game();
}
