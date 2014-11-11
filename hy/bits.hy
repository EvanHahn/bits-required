(import sys)
(import math)

(print
  (+
    (int
      (math.log
        (int (nth sys.argv 1))
        2))
    1))
