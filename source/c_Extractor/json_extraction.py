from json import JSONDecoder

def loads_invalid_obj_list(s):
    decoder = JSONDecoder()
    s_len = len(s)

    objs = []
    end = 0
    while end != s_len:
        obj, end = decoder.raw_decode(s, idx=end)
        objs.append(obj)

    return objs


f = open('output.txt')
s = f.read()
print s
objs = loads_invalid_obj_list(s)
