#zadtak 1
install.packages('caret')
install.packages('tree')
library(caret)
library(tree)

skup <- read.csv('https://odraz.com/dataset/toplina.csv')
skup$result <- as.factor(skup$result)

indeks <- createDataPartition(skup$result, p=0.75, list=FALSE )
tren <- skup[indeks, ]
test <- skup[-indeks, ]

model = tree(result ~ ., data=tren, method = "class")
model
plot(model)
text(model, cex = 1)

pred <- predict(model, test, type = "class")

confusionMatrix(test$result, pred)

#zadatak 2

library(caret)

skup <- read.csv('https://www.odraz.com/dataset/cars_evaluation_multi.csv', stringsAsFactors = T)

indeks <- createDataPartition(skup$car, p=0.8, list=FALSE )
tren <- skup[indeks, ]
test <- skup[-indeks, ]

cv <- trainControl(method = "randomForest")

metoda <- train(car ~ . , tren, trControl = cv, method = "class" )

pred <- predict(metoda, test, type = "class")

confusionMatrix(test$car, pred)


#zadtak 3
#install.packages("klaR")
library(caret)
library(klaR)

skup <- read.csv('https://www.odraz.com/dataset/cars_evaluation_bin.csv')

indeks <- createDataPartition(skup$buy_price, p=0.8, list=FALSE )
tren <- skup[indeks, ]
test <- skup[-indeks, ]

cv <- trainControl(method = "repeatedcv", number = 10, repeats =  2)

nb <- train(buy_price ~ ., tren, method = "nb", trControl = cv)

nb



