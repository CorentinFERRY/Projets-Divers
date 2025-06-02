# Écrivez votre code ici !
#Création d'une liste
fruits = ["pomme","banane","orange"]

#affichage de la liste
print(fruits)

#ajout de kiwi au fond de la liste
fruits.append('kiwi')
print(fruits)

#suppression d'orange dans la liste
fruits.remove("orange")
print(fruits)

#modification du 2eme element de la liste
fruits[1]="ananas"
print(fruits)

#affichage de la longeur de la liste
print(len(fruits))

#triage de la liste par ordre alphabétique
fruits.sort()
print(fruits)