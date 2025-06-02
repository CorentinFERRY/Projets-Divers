# Ecrivez votre code ici

#Fonction de calcul du salaire
def salaire_mensuel(salaire_annuel):
    salaire_mensuel = salaire_annuel  /12
    return salaire_mensuel

def salaire_hebdomadaire(salaire_mensuel):
    salaire_hebdomadaire = salaire_mensuel/4
    return salaire_hebdomadaire

def salaire_horaire(salaire_hebdomadaire,heures_travaillees):
    salaire_horaire = salaire_hebdomadaire / heures_travaillees
    return salaire_horaire

salaire_annuel = input("Saisissez votre salaire annuel : ")
salaire_annuel = float(salaire_annuel)

heures_travaillees = input ("Saissisez votre nombre d'heures travaillées par semaines : ")
heures_travaillees = float(heures_travaillees)

calcul_salaire = salaire_mensuel(salaire_annuel)
print(calcul_salaire)
calcul_salaire = salaire_hebdomadaire(calcul_salaire)
print(calcul_salaire)
calcul_salaire = salaire_horaire(calcul_salaire,heures_travaillees)
print(f"Votre salaire horaire est de : {round(calcul_salaire,2)} euros")