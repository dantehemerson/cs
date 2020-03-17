(let [lines (line-seq (java.io.BufferedReader. *in*))] (
      println(
        (fn[n]
          (take n (range)))
            (Integer. (first lines)))))
