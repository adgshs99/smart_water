const express = require('express');
const morgan =require('morgan');
const cors =require('cors');
const dotenv =require('dotenv');
const mysql = require('mysql2');

dotenv.config();
const app =express();
const Http_port = 4001;


app.use(express.json());
app.use(cors());
app.use(morgan('dev'));

app.listen(Http_port, ()=>{
  console.log('the server is running on port:${Http_port}');
});

const esp = require('./routes/esp')
app.use('/esp',esp);

