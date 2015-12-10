import qualified Data.ByteString.Lazy.Char8 as L8
import Data.Digest.Pure.MD5 (md5)

seqInts = map show [0..]

md5List l = map (\x -> ((md5 $ L8.pack $ "yzbqklnj"++x),x)) l

main =
    print $ filter (\(x,y) -> "00000" == (take 5 $ show x)) (md5List seqInts)
