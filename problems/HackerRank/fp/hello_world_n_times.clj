(defn hello_word_n_times [n]
  (loop [x 0]
      (when (< x n)
          (println "Hello World")
          (recur (+ x 1)))))

(def n (Integer/parseInt (read-line)))
(hello_word_n_times n)
