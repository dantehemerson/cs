import torch

# Create a tensor with requires_grad=True to track the gradients
x = torch.tensor(5.0, requires_grad=True)

# Create a tensor operation
y = x ** 2

# Compute the gradient of y with respect to x
y.backward()

# Print the gradient of y with respect to x
print(x.grad)  # Output: tensor(10.)
