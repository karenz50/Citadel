def order_words(file_name):
    in_file = open(file_name, "r")
    words = {}
    data = in_file.readlines()

    for line in data:
        cur_words = line.split()
        
        for cur_word in cur_words:
            word_len = len(cur_word)
            if word_len not in words.keys():
                words[word_len] = [cur_word]
            else:
                words[word_len].append(cur_word)

    ordered_word_lens = sorted(words.keys())
    word_list = []

    for cur_key in ordered_word_lens:
        word_list = word_list + words[cur_key]

    in_file.close()

    return word_list


if __name__ == "__main__":
    print(order_words("order_list_words.txt"))