(defn fun [num lst]
  (apply concat (map #(repeat num %) lst))
)
