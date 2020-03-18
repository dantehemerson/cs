(def n (Integer/parseInt (clojure.string/trim (read-line))))

(doseq [n-itr (range n)]
    (def x (Double/parseDouble (clojure.string/trim (read-line))))
    (loop [d 1
            r 1.0
            fac 1.0
            exp x]
        (if (> d 9)
            (println (format "%.4f" r))
            (recur (+ d 1) (+ r (/ exp fac)) (* fac (+ d 1.0)) (* exp x))))
)
