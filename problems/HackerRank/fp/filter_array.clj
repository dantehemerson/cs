(fn [delim list]
  (filter #(< % delim) list))
