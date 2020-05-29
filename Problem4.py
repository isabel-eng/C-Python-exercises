'''
4. Count the Word Frequency in a Text (Unique String). Don’t forget to: normalize to lower case and delete special chars.
'''
text = input("Text: ")
counter = {}
#the following for arrange the lines in different strings
for place in text.split(" "):
    #The next split reads each word on the line separated by spaces
    wordS = place.split()
    for word in wordS:
        word = word.lower().strip(".,:@!|;-_+[]{}""''()")
            #normalize to lower case and delete special chars
        #if the word already existed, it would count it or assign it a new place
        if word not in counter:
            counter[word] = 1
        else:
            counter[word] += 1

#this for prints and raffles them from highest to lowest frequency
print('N | Words')
for word in sorted( counter, key = counter.get, reverse=True ):
    print(counter[word],":", word)
