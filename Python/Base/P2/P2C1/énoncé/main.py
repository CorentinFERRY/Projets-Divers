# Ecrivez votre code ici !
# Input pour faire saisir les nombres souhaités
print("Merci de saisir 2 nombres")
nombre1 = input("1er nombre entier : ")
nombre2 = input("2eme nombre entier : ")

#Si les variable nombre1 et nombre2 sont bien des nombre entier alors on les transforme en entier
if nombre1.isnumeric() and nombre2.isnumeric:
    nombre1 = int(nombre1)
    nombre2 =int(nombre2)
#Sinon Erreur sur la saisie et fin du programme
else:   
    print("Merci de saisir 2 nombres entiers")
    raise SystemExit("Fin du programme")

#Recuperation du symbole d'opération souhaité
operation = input("Symbole de l'orpération souhaitée : ")
#initialisation de la variable resultat à 0
resultat = 0

#Match operation permet de tester le symbole et faire l'opération en fonction
match operation:
    case "+":
        resultat = (nombre1 + nombre2)
    case "-":
        resultat = (nombre1 - nombre2)
    case "*":
        resultat = (nombre1 * nombre2)
    case "/":
        #division par 0 impossible donc on test
        if nombre2 == 0:
            print("La division par 0 n'est pas possible")
            SystemExit("Fin du programme")
        else:
            resultat = round(nombre1 / nombre2, 2)
    case _:
        print("Symbole de l'opération inconnu")
        SystemExit("Fin du programme")
#Affichage du résultat demandé
print(f"Le resultat de l'opération est : {round(resultat,2)} .")