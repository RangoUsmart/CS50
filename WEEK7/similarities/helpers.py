import nltk
nltk.download('punkt')
from nltk.tokenize import sent_tokenize

def lines(a, b):
    """Return lines in both a and b"""
    m_list =[]
    new_list=[]
    a_split = a.split("\n")
    b_split = b.split("\n")

    for i in min(a_split, b_split, key=len):
        if i in max(a_split, b_split, key=len):
            m_list.insert(len(m_list), i)

    for element in m_list:
        if element not in new_list:
            new_list.append(element)
    return new_list


def sentences(a, b):
    m_list =[]
    new_list=[]
    """Return sentences in both a and b"""
    a_split = sent_tokenize(a, language='english')
    b_split = sent_tokenize(b, language='english')
    for i in min(a_split, b_split, key=len):
        if i in max(a_split, b_split, key=len):
            m_list.insert(len(m_list), i)

    for element in m_list:
        if element not in new_list:
            new_list.append(element)
    return new_list


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""

    substrings_a = {a[i:i+n] for i in range(len(a) - n + 1)}
    substrings_b = {b[i:i+n] for i in range(len(b) - n + 1)}

    unique_substrings = list(substrings_a.intersection(substrings_b)) 

    return unique_substrings
