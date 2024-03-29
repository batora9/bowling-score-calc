# Bowling Score Calculator

ボウリングのスコア計算機
スプリットは考慮しない

## 完成形態

### 入力
`Enter the number of pins:`で入力待ち

```
 You | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|Total
-----+---+---+---+---+---+---+---+---+---+---+-----
     |*  |   |   |   |   |   |   |   |   |   |H:300 
     |   |   |   |   |   |   |   |   |   |   |  
```
スコアが記入されるところを`*`で表示させる

### 出力
`Enter the number of pins:`での入力毎に下のようにスコアを表示する

- 1フレームでスコアが算出できるとき
```
 You | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|Total
-----+---+---+---+---+---+---+---+---+---+---+-----
     |7 2|*  |   |   |   |   |   |   |   |   |H:279 
     |  9|   |   |   |   |   |   |   |   |   |   9
```
右詰めで下段にトータルスコアを表示し、トータルが表示されている時点でのハイスコア（以降全てストライク）`H:279`を表示

- スペアのとき

1投目ではまだ2フレーム目の下にトータルは計算できない
```
 You | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|Total
-----+---+---+---+---+---+---+---+---+---+---+-----
     |7 2|7 *|   |   |   |   |   |   |   |   |H:279 
     |  9|   |   |   |   |   |   |   |   |   |   9
```

2投目でスペアになったが次の投球がないと計算できないため表示しない
```
 You | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|Total
-----+---+---+---+---+---+---+---+---+---+---+-----
     |7 2|7 /|*  |   |   |   |   |   |   |   |H:269 
     |  9|   |   |   |   |   |   |   |   |   |   9
```
Highestも更新する

次の投球で前のフレームのトータルを計算して表示する
```
 You | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|Total
-----+---+---+---+---+---+---+---+---+---+---+-----
     |7 2|7 /|6 *|   |   |   |   |   |   |   |H:269 
     |  9| 25|   |   |   |   |   |   |   |   |  25
```

- 最終スコアの表示
```
 You | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|Total
-----+---+---+---+---+---+---+---+---+---+---+-----
     |7 2|7 /|6 2|9 -|1 /|X  |X  |X  |G 5|9/X|H:152 
     |  9| 25| 33| 42| 62| 92|112|127|132|152| 152          
```
上のような形式で最終スコアを出力する。
このスコアはDiscordで送ってくれたのと同じ

