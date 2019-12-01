# 075: Computer Architecture - Assignment 2

Ανδρέας Γούλας (9061), Κωνσταντίνος Δουμανίδης (9263)

## Βήμα 1ο

### L1 Instruction Cache

Παράμετρος     |Τιμή
---------------|------
Μέγεθος        |32768B
Συσχέτιση      |2-way
Μέγεθος Γραμμής|64B

### L1 Data Cache

Παράμετρος     |Τιμή
---------------|------
Μέγεθος        |65536B
Συσχέτιση      |2-way
Μέγεθος Γραμμής|64B

### L2 Cache

Παράμετρος     |Τιμή
---------------|--------
Μέγεθος        |2097152B
Συσχέτιση      |8-way
Μέγεθος Γραμμής|64B

### 2GHz

Benchmark|Χρόνος   |CPI      |L1 DCache|L1 ICache|L2 Cache
---------|---------|---------|---------|---------|--------
bzip     |83.982ms |1.679650 |0.014798 |0.000077 |0.282163
mcf      |64.955ms |1.299095 |0.002108 |0.023612 |0.055046
hmmer    |59.396ms |1.187917 |0.001637 |0.000221 |0.077760
sjeng    |513.528ms|10.270554|0.121831 |0.000020 |0.999972
libm     |174.671ms|3.493415 |0.060972 |0.000094 |0.999944

### 1GHz

Benchmark|Χρόνος   |CPI     |L1 DCache|L1 ICache|L2 Cache
---------|---------|--------|---------|---------|--------
bzip     |161.025ms|1.610247|0.014675 |0.000077 |0.282157
mcf      |127.942ms|1.279422|0.002108 |0.023627 |0.055046
hmmer    |118.530ms|1.185304| 0.001629| 0.000221|0.077747
sjeng    |704.056ms|7.040561| 0.121831| 0.000020|0.999972
libm     |262.327ms|2.623265|0.060971 |0.000094 |0.999944

Το system χρονίζεται και στις δύο περιπτώσεις στα 1GHz (system.clk_domain).
Αυτό το ρολόι χρησιμοποιείται για τον συγχρονισμό όλων των εξαρτημάτων πάνω
στην motherboard. Αντίθετα, το cpu_clk_domain αναφέρεται στο ρολόι του
επεξεργαστή, το οποίο είναι κατά κανόνα πολλαπλάσιο του system clock. Αν
προσθέσουμε επιπλέον επεξεργαστές, αυτοί θα χρονίζονται σε πολλαπλάσια του
system clock.

Παρατηρούμε ότι ο διπλασιασμός της συχνότητας του ρολογίου δεν έχει ως
αποτέλεσμα τον ακριβή υποδιπλασιασμό του χρόνο εκτέλεσης. Αυτό οφείλεται στο
γεγονός ότι μεγάλο μέρος του χρόνου εκτέλεσης δαπανάται σε προσβάσεις στην
μνήμη. Η επιτάχυνση είναι μικρότερη όταν έχουμε υψηλό miss rate.
