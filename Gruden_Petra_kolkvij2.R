#Zadatak4
#install.packages("ISLR")
#library(ISLR)
#library(caret)
#library(e1071)
#data("Default")
#skup <- Default
#head(skup)
#skup[3:4] <- scale(skup[3:4])
#indeksi = createDataPartition(skup$default, p=0.75, list = FALSE )
#treniranje <- skup[indeksi,]
#testiranje <- skup[-indeksi,]
#model <- naivBayes()


#Zadatak2
#install.packages("fpc")
#library(fpc)
#skup <- read.csv("https://odraz.com/dataset/zvijezde3.csv")
#model <- dbscan(skup, eps = 1, MinPts = 30)
#table(model$cluster)
#model1 <- dbscan(skup, eps = 1.2, MinPts = 30)
#table(model1$cluster)

#Zadatak3
#skup <- read.csv('https://odraz.com/dataset/zvijezde3.csv')
#head(skup)
#udaljenost <- dist(skup,method = "euclidean")
#udaljenost
#klasteri <- hclust(udaljenost, method = "complete")
#klasteri
#plot(klasteri)
#abline(h=9, col="green")
#fit <- cutree(klasteri,k=4)
#fit
#table(fit)
#rect.hclust(klasteri, k=4, border="green")

#Zadatak1
#install.packages("arules")
#library(arules)
#data(Adult)
#skup <- Adult
#transakcija <- as(skup,"transactions")
#preporuke <- apriori(transakcija, parameter = list(supp=0.1, conf=0.95))
#inspect(preporuke)
#preporuke <- sort(preporuke, by="confidence")
#preporuke <- head(preporuke,n=2)
#inspect(preporuke)
