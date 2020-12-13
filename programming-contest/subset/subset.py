def subset(k, N, a):
    if k < N:
        # 全ての選択肢を再帰で取得する
        a[k] = 0
        subset(k + 1, N, a)
        a[k] = 1
        subset(k + 1, N, a) 
    else:
        # どの要素が選択されているか？
        for i in range(4):
            print(a[i], end=' ')
        print()

        # 表示処理
        print('{', end='')
        initial = 1
        for i in range(N):
            if a[i]:
                if initial != 0:
                    initial = 0
                else:
                    print(', ', end='')
                print(i, end='')
        print("}")


if __name__ == "__main__":
    subset(0, 4, [0]*4)