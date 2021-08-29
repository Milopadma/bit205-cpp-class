/*---------------PERSON FUNCTIONALITY----------------- */
function PERSON() {
  /* ------------------------CARD 1---------------------------- */
   function nextPerson1() {
    let rPersonAPI1 = {};
    fetch("https://randomuser.me/api/")
      .then(function (response) {
        console.log("nPerson1 function running")
        return response.json();

      })
      .then(function (response) {
        rPersonAPI1 = response;
        var result = rPersonAPI1.results;
        var gender = result.map((x) => x.gender)[0];
        var email = result.map((x) => x.email)[0];
        var phone = result.map((x) => x.phone)[0];

        var nameArr = result.map((x) => x.name);
        var firstName = nameArr.map((x) => x.first)[0];
        var titleName = nameArr.map((x) => x.title)[0];
        var lastName = nameArr.map((x) => x.last)[0];

        var pictureArr = result.map((x) => x.picture);
        var picture = pictureArr.map((x) => x.large)[0];

        console.log(response, result, picture);
        console.log(gender, titleName, firstName, lastName);
        /* calls changePerson function from below */
        changePerson1(firstName, lastName, gender, phone, email, picture);
        console.log("--------nPerson1 FUNC DONE-----------")
      });
  }

   function changePerson1(
    firstName,
    lastName,
    gender,
    phone,
    email,
    picture
  ) {
    var cardPerson = document.querySelector(".cardcontent1");
    document.querySelector(
      ".cardtitle1"
    ).innerText = `${firstName} ${lastName}`;
    document.getElementById("image1").src = picture;
    gender = gender.toUpperCase();
    cardPerson.innerText = `${gender}, 
      PHONE: ${phone}, EMAIL: ${email}`;
  }
  
  nextPerson1();


  /* END CARD 1 */
  /* ------------------CARD 2------------------------ */
   function nextPerson2() {
    let rPersonAPI2 = {};
    fetch("https://randomuser.me/api/")
      .then(function (response) {
        console.log("nPerson2 FUNCTION RUNNING")
        return response.json();
      })
      .then(function (response) {
        rPersonAPI2 = response;
        var result = rPersonAPI2.results;
        var gender = result.map((x) => x.gender)[0];
        var email = result.map((x) => x.email)[0];
        var phone = result.map((x) => x.phone)[0];

        var nameArr = result.map((x) => x.name);
        var firstName = nameArr.map((x) => x.first)[0];
        var titleName = nameArr.map((x) => x.title)[0];
        var lastName = nameArr.map((x) => x.last)[0];

        var pictureArr = result.map((x) => x.picture);
        var picture = pictureArr.map((x) => x.large)[0];

        console.log(response, result, picture);
        console.log(gender, titleName, firstName, lastName);
        changePerson2(firstName, lastName, gender, phone, email, picture);
        console.log("--------nPerson2 FUNC DONE----------")
      });
  }

   function changePerson2(
    firstName,
    lastName,
    gender,
    phone,
    email,
    picture
  ) {
    var cardPerson = document.querySelector(".cardcontent2");
    document.querySelector(
      ".cardtitle2"
    ).innerText = `${firstName} ${lastName}`;
    document.getElementById("image2").src = picture;
    gender = gender.toUpperCase();
    cardPerson.innerText = `${gender}, 
  PHONE: ${phone}, EMAIL: ${email}`;
  }
  nextPerson2();


  /* END CARD 2 */
  /* ---------------------------CARD 3------------------------ */
   function nextPerson3() {
    let rPersonAPI = {};
    fetch("https://randomuser.me/api/")
      .then(function (response) {
        console.log("nPerson3 function running")
        return response.json();
      })
      .then(function (response) {
        rPersonAPI = response;
        var result = rPersonAPI.results;
        var gender = result.map((x) => x.gender)[0];
        var email = result.map((x) => x.email)[0];
        var phone = result.map((x) => x.phone)[0];

        var nameArr = result.map((x) => x.name);
        var firstName = nameArr.map((x) => x.first)[0];
        var titleName = nameArr.map((x) => x.title)[0];
        var lastName = nameArr.map((x) => x.last)[0];

        var pictureArr = result.map((x) => x.picture);
        var picture = pictureArr.map((x) => x.large)[0];

        console.log(response, result, picture);
        console.log(gender, titleName, firstName, lastName);
        changePerson3(firstName, lastName, gender, phone, email, picture);
      });
  }

   function changePerson3(
    firstName,
    lastName,
    gender,
    phone,
    email,
    picture
  ) {
    var cardPerson = document.querySelector(".cardcontent3");
    document.querySelector(
      ".cardtitle3"
    ).innerText = `${firstName} ${lastName}`;
    document.getElementById("image3").src = picture;
    gender = gender.toUpperCase();
    cardPerson.innerText = `${gender}, 
  PHONE: ${phone}, EMAIL: ${email}`;
  }
  nextPerson3();


  /* END CARD3 */
}



/*---------------BUTTON FUNCTIONALITY----------------- */
class actualModal {
  constructor() {
    /* initializing modal variable */
    this.modal1 = document.getElementById("oneModal");
    this.modal2 = document.getElementById("twoModal");
    this.modal3 = document.getElementById("thirdModal");
  }
  /* initializing open/close methods to call */
  openModal() {
    this.modal1.classList.add("active");
    this.modal2.classList.add("active");
    this.modal3.classList.add("active");
    window.scrollTo(0,400)
  }

  closeModal() {
    this.modal1.classList.remove("active");
    this.modal2.classList.remove("active");
    this.modal3.classList.remove("active");
  }
}

const modal = new actualModal();
/* button selectors */
const openModalbtn = document.querySelector(".buttonOpen");
const closeModalbtn = document.querySelector(".buttonClose");

/* to open the Modal, adds event listener to variable */
openModalbtn.addEventListener("click", function (event) {
  var modalToggle = new actualModal().modal1.classList.contains("active");
  if (modalToggle == false) {
    modal.openModal();
  } else {
    modal.closeModal();
  }
});
