# Function to join given strings
def combo_string(a, b):

    # your code here
    if(len(a)>len(b)):
        longer = a
        short = b
    else:
        short = a
        longer = b

    return short + longer + short