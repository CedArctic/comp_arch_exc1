# 075: Computer Architecture - Assignment 1

## Hello world

Το script starter_se.py με τύπο CPU minor χρησιμοποιεί δύο επίπεδα κρυφής
μνήμης και μια walk cache. Οι παράμετροι του συστήματος είναι οι εξής:

Παράμετρος                   |Τιμή
-----------------------------|-------------
Τύπος CPU                    |Minor
Συχνότητα CPU                |4GHz
Πλήθος Πυρήνων               |1
Τύπος Μνήμης                 |DDR3 1600 8x8
Πλήθος Καναλιών Μνήμης       |2
Μέγεθος Μνήμης               |2GB
Μέγεθος γραμμής Κρυφής Μνήμης|64ΜΒ




Παράμετρος                   |Τιμή         |Γραμμή 
-----------------------------|-------------|-----------
Τύπος CPU                    |Minor        |[system.cpu_cluster.cpus] : type=MinorCPU
Συχνότητα CPU                |4GHz         |[system.cpu_cluster.clk_domain] : clock=250 (ps)
Πλήθος Πυρήνων               |1            |[system.cpu_cluster.cpus] : numThreads=1
Τύπος Μνήμης                 |DDR3 1600 8x8|[system.mem_ctrls1] : tCK=1250 (ps) -> 1600MHz
Πλήθος Καναλιών Μνήμης       |2            |[system.mem_ctrls0]: channels=2
Μέγεθος Μνήμης               |2GB          |[system] : mem_ranges=0:2147483647
Μέγεθος γραμμής Κρυφής Μνήμης|64ΜΒ         |[system] : cache_line_size=64

Διαθέτουμε 2 DRAM Controllers, ένα για κάθε κανάλι.
Το σύστημα έχει CPU Cluster με ένα thread.
