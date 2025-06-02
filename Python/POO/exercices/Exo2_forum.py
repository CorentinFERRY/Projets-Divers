"""Définit les classes propres à notre forum. ;)"""
import time
from abc import ABC

class File(ABC):
    """Fichier."""

    def __init__(self, name, size):
        """Initialise le nom et la taille."""
        self.name = name
        self.size = size

    def display(self):
        pass


class ImageFile(File):
    """Fichier image."""

    def display(self):
        """Affiche le fichier."""
        print(f"Fichier '{self.name}'.")

class GifImageFile(ImageFile):
    """Fichier image de type GIF"""
    def display(self):
        super().display()
        print("Fichier de type GIF")

class JpgImageFile(ImageFile):
    """Fichier image de type JPG"""
    def display(self):
        super().display()
        print("Fichier de type JPG")


class User:
    """Utilisateur."""

    def __init__(self, username, password):
        """Initialise le nom d'utilisateur et le mot de passe."""
        self.username = username
        self.password = password

    def login(self):
        """Connecte l'utilisateur."""
        print(f"L'utilisateur {self.username} est connecté.")

    def post(self, thread, content, file=None):
        """Poste un message dans un fil de discussion."""
        if file:
            post = FilePost(self, "aujourd'hui", content, file)
        else:
            post = Post(user=self, time_posted="aujourd'hui", content=content)
        thread.add_post(post)
        return post

    def make_thread(self, title, content):
        """Créé un nouveau fil de discussion."""
        post = Post(self, "aujourd'hui", content)
        return Thread(title, "aujourd'hui", post)

    def __str__(self):
        """représentation de l'utilisateur."""
        return self.username


class Moderator(User):
    """Utilisateur modérateur."""

    def login(self):
        """Connecte l'utilisateur."""
        print(f"Le modérateur {self.username} est connecté.")

    def edit(self, post, content):
        """Modifie un message."""
        post.content = content

    def delete(self, thread, post):
        """Supprime un message."""
        index = thread.posts.index(post)
        del thread.posts[index]


class Post:
    """Message."""

    def __init__(self, user, time_posted, content):
        """Initialise l'utilisateur, la date et le contenu."""
        self.user = user
        self.time_posted = time_posted
        self.content = content

    def display(self):
        """Affiche le message."""
        print(f"Message posté par {self.user} le {self.time_posted}:")
        print(self.content)


class FilePost(Post):
    """Message comportant un fichier."""

    def __init__(self, user, time_posted, content, file):
        """Initialise le fichier."""
        super().__init__(user,time_posted,content)
        self.file = file

    def display(self):
        """Affiche le contenu et le fichier."""
        super().display()
        print("pièce jointe:")
        self.file.display()


class Thread:
    """Fil de discussions."""

    def __init__(self, title, time_posted, post):
        """Initialise le titre, la date et les posts.

        Attention ici: on commence par un seul post, celui du sujet.
        Les réponses à ce post ne pourrons s'ajouter qu'ultérieurement.
        En effet, on ne créé pas directement un nouveau fil avec des réponses. ;)
        """
        self.title = title
        self.time_posted = time_posted
        self.posts = [post]

    def display(self):
        """Affiche le fil de discussion."""
        print("----- THREAD -----")
        print(f"titre: {self.title}, date: {self.time_posted}")
        print()
        for post in self.posts:
            post.display()
            print()
        print("------------------")

    def add_post(self, post):
        """Ajoute un post."""
        self.posts.append(post)

def main():
    moderator = Moderator("Corentin"," ")
    user = User("Sebastien"," ")

    moderator.login()
    user.login()

    thread = user.make_thread("Coder en Pyton POO","J'apprend à programmer en POO et je galère sa mère")
    thread.display()

    moderator.post(thread,"Comment je peux t'aider ?")
    thread.display()

    reponsehorssujet = user.post(thread,"Je fais des cookies maison")
    thread.display()
    reponsemodo = moderator.post(thread,"Vous êtes hors sujet")
    thread.display()

    print()
    print("après quelques minutes, le modérateur supprime les messages hors sujets...")
    print()

    time.sleep(2)
    moderator.delete(thread,reponsehorssujet)
    moderator.delete(thread,reponsemodo)
    thread.display()

    img = JpgImageFile(name ="Exemple de code",size = 3)
    user.post(thread,"Voici mon code",img)
    thread.display()
    moderator.post(thread,"On en discute en privé ?")

    thread.display()
main()