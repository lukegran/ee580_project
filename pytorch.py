import torch
import torch.nn.functional as F
import numpy as np

data0 = np.loadtxt('data0.txt').reshape(5100, 32)
data1 = np.loadtxt('data1.txt').reshape(5100, 32)
data2 = np.loadtxt('data2.txt').reshape(5100, 32)
data3 = np.loadtxt('data3.txt').reshape(5100, 32)
data_y2 = np.loadtxt('y2.txt')
data_y3 = np.loadtxt('y3.txt')


x0 = torch.Tensor(data0)
x1 = torch.Tensor(data1)
x2 = torch.Tensor(data2)
x3 = torch.Tensor(data3)



y0 = torch.zeros(5100).type(torch.LongTensor)
y1 = torch.ones(5100).type(torch.LongTensor)
y2 = torch.LongTensor(data_y2)
y3 = torch.LongTensor(data_y3)

x = torch.cat((x0, x1, x2, x3), 0).type(torch.FloatTensor)
y = torch.cat((y0, y1, y2, y3), ).type(torch.LongTensor)


class Net(torch.nn.Module):
    def __init__(self, n_feature, n_hidden, n_output):
        super(Net, self).__init__()
        self.hidden = torch.nn.Linear(n_feature, n_hidden)   # hidden layer
        self.out = torch.nn.Linear(n_hidden, n_output)   # output layer

    def forward(self, x):
        x = F.relu(self.hidden(x))      # activation function for hidden layer
        x = self.out(x)
        return x

net = Net(n_feature=32, n_hidden=128, n_output=4)     # define the network

print(net)  # net architecture

optimizer = torch.optim.SGD(net.parameters(), lr=0.02)
loss_func = torch.nn.CrossEntropyLoss()  # the target label is NOT an one-hotted


for t in range(1000):
    out = net(x)
    loss = loss_func(out, y)
    print(loss)
    optimizer.zero_grad()
    loss.backward()
    optimizer.step()

