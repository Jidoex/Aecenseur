//ce fichier contient la définition d'une personne et ses fonctions
#ifndef PERSON_H
#define PERSON_H
#include <stdlib.h>

//Structure personne définie par son étage de départ et son étage ciblé
typedef struct _Person {
    int src;
    int dest;
} Person;

//Structure de liste chaînée contenant une liste de personne (un étage par exemple)
typedef struct _PersonList {
    Person *person;
    struct _PersonList *next;
} PersonList;

//Fonction permettant de créer une personne
Person *createPerson(int src, int dest){
    Person *p=malloc(sizeof(Person));
    p->src=src;
    p->dest=dest;

    return p;
}

//Fonction permettant d'ajouter une personne à une liste chaînée de personnes
//création d'une liste de personne
PersonList *insert(Person *p,PersonList *list){
    PersonList *pl=malloc(sizeof(PersonList));
    
    pl->person = p;
    pl->next = list;

    return pl;
}

#endif
