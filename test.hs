sort_len :: Int
sort_len = 40000
main = do
        print $ show $ drop (sort_len - 1) $ quicksort [1..sort_len]

quicksort :: Ord a => [a] -> [a]
quicksort []     = []
quicksort (p:xs) = (quicksort lesser) ++ [p] ++ (quicksort greater)
    where
        lesser  = filter (< p) xs
        greater = filter (>= p) xs
