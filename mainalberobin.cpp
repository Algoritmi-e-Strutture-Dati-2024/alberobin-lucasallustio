int main() {
    AlberoBin<int> albero;
 
    albero.inserisciRadice(5);
    cout << "Inserisco Radice (5): \n";
    albero.mostraAlbero();
    
    albero.aggiungiSinistro(0, 8);
    albero.aggiungiDestro(0, 15);
    
    albero.aggiungiSinistro(1, 20);  
    albero.aggiungiDestro(2, 25);   

    cout << "\nAlbero dopo l'inserimento dei figli:\n";
    albero.mostraAlbero();
  
    int nodoCorrente = 0;
    int sinistro = albero.indiceSinistro(nodoCorrente);
    int destro = albero.indiceDestro(nodoCorrente);
    
    cout << "\nNodo " << nodoCorrente << " (" << albero.leggiRadice() << ") ha:\n";
    cout << "Figlio sinistro all'indice: " << (sinistro != -1 ? sinistro : -1) << endl;
    cout << "Figlio destro all'indice: " << (destro != -1 ? destro : -1) << endl;
  
    albero.eliminaNodo(3);
    
    cout << "\nRimuovo il nodo 3: \n";
    albero.mostraAlbero();

    return 0;
}
