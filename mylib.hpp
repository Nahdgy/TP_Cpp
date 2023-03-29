#ifndef _MYLIB_HPP_
    #define _MYLIB_HPP_

    /**
     * @brief Calcule la valeur absolue d'un nombre.
     * @param x Est un nombre entier.
     * @return {int} La valeur absolue de x.
     */
    int abs(int x);

    /**
     * @brief Si le chiffre est paire ou non.
     * @param n Est un nombre entier.
     * @return {bool} Si le chiffre est paire ou non.
     */
    bool paire(int n);

    /**
     * @brief le programe affiche 10 caratères '*'.
    */
    void afficherligne();

    /**
     * @brief le programme affiche 10 caratères '*'.
     * @param char c Est le caratère choisit par l'utilisateur.
     * @param int nbchar Est le nombre de caractères par ligne choisit par l'utilisateur.
    */
    void afficherligne(char c, int nbchar);

    /**
     * @brief le programme calcul une année bissextile.
     * @param int year Est l'année choisit par l'utilisateur.
     * @return {bool} si l'année est bissextile ou non.
    */
    bool bissextile(int year);

    /**
     * @brief le programme est que pour deux nombres donnés a et b, on peut avoir a×b en ajoutant un entier a exactement b fois au résultat sans utiliser "*".
     * @param int x et y sont des nombres entiers.
     * @return {int} La valeur x ou y.
    */
    int mul(int x, int y);

    /**
     * @brief le programme calcul la multiplication sans "*".
     * @param int x et y sont des nombres entiers.
     * @param int mul le programme est que pour deux nombres donnés a et b, on peut avoir a×b en ajoutant un entier a exactement b fois au résultat sans utiliser "*".
     * @return {int} La valeur de la multiplication.
    */
    int multiply(int x, int y);

    /**
     * @brief le programme calcul la multiplication sans "*".
     * @param int x et y sont des nombres entiers.
     * @param int mul le programme est que pour deux nombres donnés a et b, on peut avoir a×b en ajoutant un entier a exactement b fois au résultat sans utiliser "*".
     * @return {int} La valeur de la multiplication.
    */
    int multiplyCorrect(int x, int y);

    /**
     * @brief le programme calcul la division sans "/";
     * @param int x et y sont des nombres entiers.
     * @param int sign stocke le signe du résultat.
     * @param int quotient initialise le quotient par 0.
     * @return {int} La valeur de x diviser par y.
    */
    int divide(int x, int y);

    /**
     *@brief Le programme calcul la sommes des nombres que l'utilisateur choisit.
     *@param int a et s sont des nombres entiers.
     */
    int sommeDesNb(int a);

    /**
     * @brief Le programme calcul tout les diviseurs du nombre choisit par l'utilisateur.
     * @param int nb est un nombre entier.
     * @return {int} Les valeurs du dividende.
    */
    int lesDiviseurs(int nb);
  /**
     * @brief Le programme donne la valeur la plus haute et la valeur la plus petite d'un tableau de 10 nombre.
     * @param int nb est un nombre entier.
     * @return {int} Les valeurs minimales et maximales.
    */
   int minAndMax (int min, int max);
/**
     * @brief Le programme donne copie les nomlbres entiers positives d'un tableau t1 dans un tableau t2 en remplaçant les négatifs par des 0 .
     * @return {int[]} tableau t2 d'entiers.
    */
   int CopyTab();


    /**
     * @fn void DiviseursPopresCorrection()
     * @brief le programme calcul tout les diviseurs du nombre choisit par l'utilisateur.
     * @remarks 
    */
    void DiviseursPopresCorrection();
    /**
     * @brief Le programme calcul si le nombre est parfait ou non.
     * @return {int}
    */
    int nombreParfait();
    /**
     * @fn void TP1_exo0()
     * @brief Exercice 0, excice du TP1 qui demande à l'utilisateur de nom est un nombre entier ce qui renvoie à son nombre absolue.
     */
    void TP1_exo0();

    /**
    *@fn void TP1_exo1()
    *@brief Exercice 1, exercice du TP1 qui demande à l'utilisateur son prénom 
    et son nom + déclare si la personne est mineur ou majeur.
    */
    void TP1_exo1();

    /**
     * @fn void TP1_exo2()
     * @brief Exercice 2, exercice du TP1 qui demande à l’utilisateur de saisir un nombre et d’afficher s’il est pair ou impair.
    */
    void TP1_exo2();

    /**
     * @fn void TP1_exo3()
     * @brief Exercice 3, exercice du TP1 qui est un programme qui affiche une ligne composée de 10 caractères “*” et un autre programme demandant 
     à l’utilisateur de saisir un nombre entier et qui affiche n fois le premier programme.
    */
    void TP1_exo3();

    /**
     * @fn void TP1_exo3_1()
     * @brief exercice du TP1 qui demande à l’utilisateur de choisir le caractère et choisir 
     le nombre de caractère à afficher pour une ligne (entier).
    */
    void TP1_exo3_1();

    /**
     * @fn void TP1_exo4()
     * @brief  Est un programme qui permute deux valeurs entières saisies par un utilisateur et les affiche avant et après permutation. 
     Faites la même chose pour 3 valeurs flottantes ou caractères.
    */
    void TP1_exo4();

    /**
     * @fn void TP1_exo5()
     * @brief Est un programme qui indique si une année donnée par un utilisateur est bissextile. Pour savoir si une année est bissextile, 
     elle doit être divisible par 4, non divisible par 100 et divisible par 400.
    */
    void TP1_exo5();

    /**
     * @fn void TP1_exo6()
     * @brief  Est un programme qui demande deux entiers x et y à l’utilisateur et calcule produit. Mais sans utiliser l’opérateur "*".
    */
   void TP1_exo6();

   /**
    * @fn void TP1_exo7()
    * @brief Est un programme qui demande deux entiers x et y à l’utilisateur et calcule la division de x par y. Mais sans utiliser l’opérateur /.
     Affichez également le reste si possible.
   */
  void TP1_exo7();

  /**
   * @fn void TP1_exo8()
   * @brief Est un programme qui permet à un utilisateur de saisir une suite d’entiers et de faire leur somme jusqu’à ce qu’il tape “0”. 
   À la fin du programme, on affichera également à la fin du programme le nombre de saisie qu’a réalisé l’utilisateur.
  */
  void TP1_exo8();

    /**
     * @fn void TP1_exo9()
     * @brief Est un programme qui détermine tous les diviseurs propres d’un nombre entier qui a été saisie par l’utilisateur
     */
    void TP1_exo9();
    
 /**
 * @fn void TP2_exo1()
 * @brief Programme permettant de retrouver le chiffre le plus petit et le chiffre le plus grand dans un tableau de 10 chiffres
 */   
    void TP2_exo1();
    /**
 * @fn void TP2_exo2()
 * @brief Programme permettant de copier des nombres d'un tableau à un autre
 */   

    void TP2_exo2();
 /**
 * @fn void TP2_exo3()
 * @brief Programme permettant de faire la somme de nombres flottant d'un tableau
 */   
    void TP2_exo3();

   
    
#endif //_MYLIB_HPP_