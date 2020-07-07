import torch
import torch.nn.functional as F
import numpy as np

class Net(torch.nn.Module):
    def __init__(self, n_feature, n_hidden, n_output):
        super(Net, self).__init__()
        self.hidden = torch.nn.Linear(n_feature, n_hidden)   # hidden layer
        self.out = torch.nn.Linear(n_hidden, n_output)   # output layer

    def forward(self, x):
        x = F.relu(self.hidden(x))      # activation function for hidden layer
        x = self.out(x)
        return x

net = Net(n_feature=32, n_hidden=128, n_output=4)
net = torch.load('mips.pt')

random_vectors = np.loadtxt('random_vectors.txt').reshape(320, 32)
f = open('tb.txt', 'w')

for i in range(320):
    n_data = random_vectors[i,:]


    i_data = n_data.astype(int)
    l_data = i_data.tolist()
    #print(l_data)

    t_data = torch.Tensor(n_data)

    #print(net(t_data))
    t_out = net(t_data).argmax()
    if t_out == torch.LongTensor([3]):
        print('J-type')
        w_data = [str(x) for x in l_data]
        f.write(''.join(w_data))
        f.write('\n')
    elif t_out == torch.LongTensor([2]):
        print('I-type')
        w_data = [str(x) for x in l_data]
        f.write(''.join(w_data))
        f.write('\n')
    elif t_out == torch.LongTensor([1]):
        print('R-type')
        w_data = [str(x) for x in l_data]
        f.write(''.join(w_data))
        f.write('\n')
    elif t_out == torch.LongTensor([0]):
        print('Redundant')


