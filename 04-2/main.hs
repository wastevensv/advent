import qualified Data.ByteString.Lazy.Char8 as L8
import Data.Digest.Pure.MD5 (md5)

seqInts = map show [6000000..]

md5List l = map (\x -> ((md5 $ L8.pack $ "yzbqklnj"++x),x)) l

main =
    mapM_ print $ filter (\(x,y) -> ("000000" == (take 6 $ show x)) || ((read y) `mod` 100000)==0 ) (md5List seqInts)
