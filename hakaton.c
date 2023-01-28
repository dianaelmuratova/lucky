#include<stdio.h>
#include <stdlib.h> 
#include <string.h>
 
int new_members(){
    return 24;
};

int amount_of_agreement(int res, int answer){
    res = answer + res;
    return res;
}

int strccomp(char* str1, char* str2){
    int a = strlen(str1), b = strlen(str2);
    for(int y = 0; str1[y]; y++){
        if(str1[y] != str2[y]) return 1;
    }
    if(a != b) return 1;
    return 0;
}

void amount_main(char* city, int  members, int population, int add_amount, int last_m){
    char* time = "28 . 01 . 2023";
    int city_population = 32775;
    char* last_time = "28 . 12 . 2022";
    printf("Uzbekistan:\nTotal amount of Population %d in %s\n", population, time);
    printf("Total amount of families that entered Temir daftar %d\n", members);
    printf("City\n%s\nTotal amount of Population %d\n\n",city,  city_population);
    int new_amount = members + add_amount;
    printf("Nowaday Members of Temir daftar members is %d families\n", members + add_amount);
    if(new_amount < last_m){
        printf("Last month our rate was %d families in %s\nBut today %d\nEconomic Condition of the population has improved\n", last_m,last_time,  new_amount);
    }else{
        printf("Last month our rate was %d families in %s\nBut today %d\nEconomic Condition of the population has fallen\n", last_m, last_time, new_amount);
    }
}

char* name_find(){
    return "Andijan";
}

int find_total_members(){
    return 31390;
}

int last_month(){
    return 41400;
}

int main()
{
    char* name_of_city = name_find();
    int total_amount_of_population = 36024946;
    int total_amount_of_members = find_total_members();
    int add_amount = new_members();
    int last_month_amount_members = last_month();
    amount_main(name_of_city, total_amount_of_members, total_amount_of_population, add_amount, last_month_amount_members);
}