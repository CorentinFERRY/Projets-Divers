#definition des classes 

class Toolbox:
    """ Classe Boite à outil """
    def __init__(self):
        """Initialisation des outils"""
        self.tools=[]

    def add_tool(self, tool):
        """Méthode d'ajout d'un outil"""
        self.tools.append(tool)

    def remove_tool(self,tool):
        """Méthode pour supprimer un outil"""
        index = self.tools.index(tool) #J'accède à l'index de l'outil qui veut etre supprimé
        del self.tools[index] #Je le supprime de ma liste

class ScrewDriver:
    """Classe Tournevis """
    def __init__(self,size = 3):
        """Initialise la taille """
        self.size = size

    def tighten(self,screw):
        """Serrer une vis"""
        screw.tighten()

    def loosen(self,screw):
        """Déserre une vis"""
        screw.loosen()

    def __repr__(self):
        """Représentation de l'objet."""
        return f"Tournevis de taille {self.size}"
        
class Hammer:
    """Classe Marteau"""
    def __init__(self,color="red"):
        """Initialise la couleur du marteau"""
        self.color = color
    
    def paint(self,color):
        """Modifie la couleur du marteau"""
        self.color = color

    def hammer_in(self,nail):
        """Planter un clou"""
        nail.nail_in()

    def remove(self,nail):
        """Retirer un clou"""
        nail.remove()

    def __repr__(self):
        """Représentation de l'objet."""
        return f"Marteau de couleur {self.color}"

class Nail:
    """ Clou. """

    def __init__(self):
        """Initialise son statut "dans le mur". """
        self.in_wall = False
    
    def nail_in(self):
        """Enfonce le clou dans le mur"""
        if not self.in_wall:
            self.in_wall = True

    def remove(self):
        """Enleve le clou du mur."""
        if self.in_wall:
            self.in_wall = False
    
    def __str__(self):
        """Retourne une forme lisible de l'objet."""
        wall_state = "dans le mur " if self.in_wall else "hors du mur"
        return f"Clou {wall_state}"
    
class Screw:
    """Vis."""
    MAX_TIGHTNESS = 5

    def __init__(self):
        """Initialise le degré de serrage"""
        self.tightness = 0
    
    def loosen(self):
        """Déserre la vis"""
        if self.tightness > 0:
            self.tightness -= 1
    
    def tighten(self):
        """Serre la vis."""
        if self.tightness < self.MAX_TIGHTNESS:
            self.tightness += 1 
    
    def __str__(self):
        """Retourne une forme lisible de l'objet."""
        return "Vis avec un serrage de {}".format(self.tightness)

#On instancie nos outils 
toolbox = Toolbox()
screwdriver = ScrewDriver()
hammer = Hammer()

#On ajoute dans notre boite à outil le tournevis et le marteau
toolbox.add_tool(screwdriver)
toolbox.add_tool(hammer)

#On instancie une vis 
screw = Screw()
#On affiche la vis avant le serrage
print(screw)
#On serre la vis avec le tournevis
screwdriver.tighten(screw)
#On affiche la vis après le serrage
print(screw)

#On instancie le clou
nail = Nail()
#On affiche le clou avant de l'enfoncer
print(nail)
#On enfonce le clou avec le marteau
hammer.hammer_in(nail)
#On affiche le clou apres l'avoir enfoncé
print(nail)

# --------------------------------------------------------------
# Que pouvez-vous faire d’autre avec ces classes et ces objets ?

# enlever un outil
print("outils dans la boîte:", toolbox.tools)
toolbox.remove_tool(hammer)
print("on a enlevé le marteau")
print("outils dans la boîte:", toolbox.tools)

# désserrer la vis
screwdriver.loosen(screw)
print(screw)

# enlever le clou
hammer.remove(nail)
print(nail)

# repeindre le marteau
hammer.paint("yellow")
print(hammer)