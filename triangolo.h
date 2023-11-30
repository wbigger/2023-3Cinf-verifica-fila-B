#ifndef _TRIANGOLO_H_
#define _TRIANGOLO_H_

/** @brief Calcola l'area del triangolo data base ed altezza.
 *
 * Vincoli: base ed altezza devono essere maggiori di 0, altrimenti la funzione ritorna 0.
 *
 * @param b base del triangolo
 * @param h altezza del triangolo
 * @return area del triangolo
 */
float calcola_area_triangolo(float b, float h);

/** @brief Calcola l'ipotenusa di un triangolo rettangolo dati i cateti.

 Vincoli: i cateti devono essere positivi.
 Se almeno uno dei cateti è negativo, la funzione ritorna NAN.
 L'ipotenusa del triangolo deve essere minore di 100; se maggiore, la funzione ritorna sempre 100.

 @param c1 un cateto del triangolo
 @param c2 l'altro del triangolo

 @return l'ipotenusa del triangolo
*/
float calcola_ipotenusa(float c1, float c2);

/** @brief Stampa l'area di triangoli con stessa base e altezza compresa tra due valori.

  Stampa l'area di triangoli con stessa base e altezza compresa tra i valori h_min e h_max.
  La funzione stampa sempre 9 valori, distribuiti ad intervalli regolari fra i due estremi, che devono essere compresi.
  Ad esempio, se h_min = 18 e h_max = 42, stamperà i valori per 18, 21, 24, 27, 30, 33, 36, 39, 42.
  Nota: i valori sono stampati come tabella; la prima riga è una intestazione della tabella; i valori sono separati da virgola;
  le stampe hanno sempre 4 cifre decimali.

  @param b la base del triangolo
  @param h_min l'altezza del triangolo più piccolo
  @param h_max l'altezza del triangolo più grande
  @return void
 */
void plot_area_triangolo(float b, float h_min, float h_max);

#endif /* _TRIANGOLO_H_ */