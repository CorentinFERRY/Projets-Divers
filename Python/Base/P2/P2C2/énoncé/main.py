# Ecrivez votre code ici !
nombres = input("Saisir une liste de nombre séparé par une virgule ex : 1,2,3,4 : ")

liste = nombres.split(',')

print(f"La liste saisie est : {liste}")

liste_entiers = []
for nombre in liste:
    nombre_entier = int(nombre)
    liste_entiers.append(nombre_entier)

print("Notre Liste d'entiers : ",liste_entiers)

somme = 0
for nombre in liste_entiers:
    somme += nombre

print("La somme est : ", somme)

moyenne = somme / len(liste_entiers)

print("La moyenne est : ", moyenne)
nombre_supp_moyenne = 0 
for nombre in liste_entiers:
    if nombre > moyenne:
        nombre_supp_moyenne += 1
        print("Bravo ! vous avez eu mieux que les autres : ",nombre)

print (nombre_supp_moyenne)
