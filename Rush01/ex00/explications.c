// Pour verifier : faire tout les 4 possibles en premier (la ou se situent tout les 1)
// Si on a une vue a 4 : Ecrire en partant du 4 : 1 2 3 4
//
// Pour la suite, creer une fonction qui detecte si 3 des 4 valeurs utilisables par lignes
// sont presentent pour ajouter automatiquement la quatrieme
//
// Si une vue en 2 possede un 4 en 4 ieme position : la premiere position sera un 3
// Si une vue en 2 possede un 1 en 1 iere position : la deuxieme position sera un 4
// Si une vue en 2 possede un 4 en 3 ieme position : le premiere sera 2 ou 3 selon la
// 4 ieme position
//
// Si une vue en 3 possede un 2 en 2 ieme et un 4 en 3 ieme position, les positions seront : 1 2 4 3
// Si une vue en 3 possede un 1 en 3 ieme ou 2 ieme et un 4 en 4 ieme position,
// les positions seront : 2 3 1 4 / 2 1 3 4
// Si une vue en 3 possede un 4 en 3 ieme et un 3 en 4 ieme position, les positions seront : 1 2 4 3
// Si une vue en 3 possede un 3 en 4 ieme position, les positions seront : 1 2 4 3
// Si une vue en 3 possede un 3 en 3 ieme position, les positions seront : 2 1 3 4
// Si une vue en 3 possede un 2 en 2 ieme position, les positions seront : 1 2 4 3
// Si une vue en 3 possede un 1 en 1 iere et un 4 en 4 ieme position, les positions seront : 1 3 2 4
//
// Interdits/Obligations (erreurs) :
//
// Seul la vue 1 est en face de la vue 4
// Le 4 n'est au bord que si la vue est a 1
// Si la vue 2 et la vue 3 sont en face, le 4 est a equidistance
//
// Derniere verif : verifier la presence de 3 fois chaque signe et determiner
// leur derniere position possible
